/*
Title: Practicas de Capitulo 4 ARM Raspberry Pi
Filename: esbn1.s
Author: Espericueta Lopez Gilberto
Date: 09/12/2021
Description: Despliega el mensaje "Hola Mundo!" en pantalla
Input:
Output:
*/
.data
cadena:	.asciz "Hola Mundo !\n"
cadenafin:

.text
.global main

main:	push	{r7, lr} 		/* preservamos reg. */
	mov	r0, #1 			/* salida est á ndar */
	ldr	r1, =cadena 		/* cadena a enviar */
	mov	r2, #cadenafin - cadena /* longitud */
	mov	r7, #4 			/* seleccionamos la */
	swi	#0 			/* llamada a sistema ’write ’*/
	mov	r0, #0 			/* devolvemos ok */
	pop	{r7, lr} 		/* recuperamos reg. */
	bx	lr 			/* salimos de main */
