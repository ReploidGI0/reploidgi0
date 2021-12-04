.global _start
_start:
	mov r3, #3
	mov r4, #4
	cmp r3, r4
	subgt r3, r3, r4
	sublt r4, r4, r3
	bne salto

salto:
	mov r0, #1
	ldr r1, =mensaje
	ldr r2, =longitud
	mov r7, #4
	swi 0
	mov r0, #0
	mov r7, #1
	swi 0

.data
	mensaje: .ascii "Salto\n"
	longitud = . - mensaje
