/*
Title: Práctica 1.4
Filename: numero.s
Author: Espericueta Lopez Gilberto
Date: 03/12/2021
Description: Programa en el que se mostrara un numero mientras se cumpla cierta condicion
Input:
Output: Numero: %d \n
*/
.data
.balign 4
messg:	.asciz "Numero: %d \n"

.text
.global _start
_start:
	mov r0, #5	@ Movemos el 5 al registro r0
	mov r1, r0	@ Se asigna r0 a r1

while:
	cmp r1, #1	@ Compara r1 con #1
	beq print	@ Salta si es igual
	sub r1, #1	@ Sustrae r1 #1
	mul r0, r1, r0	@ Multiplica r1 por r0 y lo asigna a r0
	mov r4, r0	@ Asigna r0 a r4
	bal while	@ Salta a while

print:
	LDR	r0, =messg	@ Movemos el contenido de messg a r0
	MOV	r1, r4		@ Asigna r4 a r1
	BL	print		@ Salta a printf
	MOV	r0, #0		@ Asigna #0 a r0
	MOV	r7, #1		@ Asigna #1 a r7
	SVC	#0		@ Supervisor call

.global print
