.type unit   # This sets the type of the program to unit, other possible types are `building` and `overseer`
.cpu pu24	 # Set the cpu where this will run, this decides the amount of stack, IO ports and processing speed.

# Interactive var sets a variable type that will be exposed in the UI
# The maximum amount of interactive vars are set by the cpu type.
.interactive_var mode options [:peaceful, :aggressive] = :peaceful
.interactive_var retreat bool = false

# Attached modules to the system, this will allow you to interact with the world
# In this case this is a input module, which means that it allows you to see
# around you.
.module *visual visio10
# In this case we append a MOTIONv2 module, which will allow us to move
.module *motor MOTIONv2
# In this case we append an attack module, a ranged attack module
.module *weapon ARCHERmk2
# In this case it's to be able to communicate with other units
.module *antenna COMMSmk2

# Constant definition
.define visio10_scan_around 0x01
.define MOTIONv2_current_target 0x00
.define MOTIONv2_goto 0x01
.define antenna_broadcast 0x00

# This is a variable length instruction set

@main:
	XPOS  # push the last user positional command to the stack
	XKEY  # push the last user pressed key to the stack

	PUSH visio10_scan_around
	# call scan_around for the module named visual, this will put the result in the units stack
	# the units stack is a stack that holds enemy unit info
	# functions that operate over the unit stack start with U
	TRIGGER *visual 

	RAND # generate a random number and push it to the stack
	RANDMAX 6 # generate a random nat from 0 to the given number (inclusive) and push it to the stack

	# Check if we are in aggressive mode
	PUSH :aggressive
	LOAD mode
	JE @loop_aggressive
@loop_peaceful:
	UDISTS # calculate the distance between self and the top unit in the unit stack and put it in the stack
	PUSH 10
	JLE @too_close_unit
	UPOP # remove top unit from unit stack
	JMP loop
@too_close_unit:
	UVECSUBS # take the pos of the other unit and substract it with self, push it to the stack
	PUSH MOTIONv2_go_dir
	TRIGGER *motor # this motor function takes a vector and moves in that direction
	JMP @main
@loop_aggressive:
	# do aggressive stuff
	JMP @main
