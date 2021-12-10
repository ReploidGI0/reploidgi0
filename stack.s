/*
Title: Lenguajes de Interfaz: Practicas 3.6
Filename: stack.s
Author: Espericueta Lopez Gilberto
Date: 11/12/2021
Description: Ejemplo sencillo del uso del stack de la cpu
Input:
Output:
*/

.global _start

_start:
     mov   r0, #2  /* set up r0 */
     push  {r0}    /* save r0 onto the stack */
     mov   r0, #3  /* overwrite r0 */
     pop   {r0}    /* restore r0 to it's initial state */
     bx    lr      /* finish the program */
