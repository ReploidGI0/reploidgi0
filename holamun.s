/*
Title: Práctica 1.4
Filename: holamun.s
Author: Espericueta Lopez Gilberto
Date: 03/12/2021
Description: Programa que muestra un mensaje
Input:
Output: Hola Mundo
*/
.data

msg:
	.ascii "Hola mundo\n!"
.text
.global _start

_start:
	mov r0, #1	@ Se mueve el 1 al registro 0
	ldr r1, =msg	@ Movemos el contenido de msg a r1
	mov r2, #11	@ Se mueve 11 a r2
	mov r7, #4	@ En r7 colocamos 4 que significa escribe en syscall
	swi 0		@ Llamamos a syscal
	bx lr
