module.exports = grammar({
	name: 'kikai',
	rules: {
		source_file: $ => repeat($._definition),

		_definition: $ => choice(
			$.op,
			$.define,
			$.module,
			$.interactive_var,
			$.type,
			$.cpu,
			$.label,
			$.comment,
		),

		define: $ => seq(
			'.define',
			$.identifier,
			$._constant,
		),

		label_target: $ => /@[a-zA-Z_]+/,
		label: $ => /@[a-zA-Z_]+:/,

		identifier: $ => /[a-zA-Z_]+/,
		_constant: $ => choice(
			$.number,
			$.atom,
			$.identifier,
		),

		module_target: $ => /\*[a-zA-Z_]+/,
		module: $ => seq(
			'.module',
			$.module_target,
			$.hardware_name,
		),

		number: $ => /[0-9]+/,
		atom: $ => /:[a-zA-Z_]+/,

		op: $ => choice(
			'POP',
			'UPOP',
			'UVECSUBS',
			'UVECADDS',
			'UDISTS',
			seq('PUSH', $._constant),
			seq(choice(
				'JMP',
				'JLE',
				'JL',
				'JGE',
				'JG',
			), $.label_target),
			seq('TRIGGER', $.module_target),
		),

		hardware_name: $ => choice(
			'visio10',
			'MOTIONv2',
			'ARCHERmk2',
			'COMMSmk2',
		),

		type: $ => seq(
			'.type',
			choice(
				'unit',
				'building',
				'overseer',
			)
		),

		cpu: $ => seq(
			'.cpu',
			choice(
				'pu24',
			)
		),

		interactive_var: $ => seq(
			'.interactive_var',
			$.identifier,
			$.ivar_type,
		),

		ivar_type: $ => 
			choice(
				$._ivar_bool_def,
				$._ivar_options_def,
			),

		_ivar_bool_def: $ => seq(
			'bool',
			'=',
			choice('true', 'false'),
		),

		_ivar_options_def: $ => seq(
			'options',
			'[',
			repeat(seq($.atom, ',')),
			$.atom,
			']',
			'=',
			$.atom
		),
		
		comment: $ => /#.*\n/,
	}
});
