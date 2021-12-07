/*
Title: Practicas de Capitulo 2 ARM Raspberry Pi
Filename: tipos3a.s
Author: Espericueta Lopez Gilberto
Date: 05/12/2021
Description:
Input:
Output:
*/
.data
var1: 	.asciz " %d\ 012 "

.text
.global _start
_start:	push { r4, lr }
	mov r4, # 0
.L2: 	mov r1, r4
	ldr r0, = var1
	add r4, r4, # 1
	bl print
	cmp r4, # 5
	bne .L2
	pop { r4, pc }
