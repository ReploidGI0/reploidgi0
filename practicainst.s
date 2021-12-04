/*
Title: Práctica 1.3 Instrucciones
Filename: practicainst.s
Author: Espericueta Lopez Gilberto
Date: 26/11/2021
Description:
Input:
Output:
*/
.data
var1 : .word 10 @ tipo palabra
var2 : .word 2
var3 : .word 0x1234 @ direccion de destino 

.text
.global _start
_start:	ldr	r1,	pvar1
	ldr	r1,	[r1]
	ldr	r2,	pvar2
	ldr	r2, 	[r2]
	ldr	r3,	pvar3
	ldr	r3,	[r3]
	sub	r4,	r1,	r2 @ resta
	mul	r0,	r4,	r4 @ multiplicacion
	str	r0,	[r3] @desplazar
	bx	lr

pvar1 : .word var1 @ definicion de apuntadores
pvar2 : .word var2
pvar3 : .word var3
