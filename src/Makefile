.PHONY: debug

comp: compiled.s kikai_macros.inc
	fasm compiled.s comp

debug: comp
	r2 -d ./comp

