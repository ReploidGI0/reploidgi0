/*
Title: Practicas de Capitulo 3 ARM Raspberry Pi
Filename: subrut3.c
Author: Espericueta Lopez Gilberto
Date: 08/12/2021
Description: Muestra la serie fibonacci en conjunto con una función en ensamblador
Input:
Output:
*/
#include <stdio.h>
int fibonacci(int n){
	if(n < 2)
		return 1;
	else
		return fibonacci (n -1) + fibonacci (n -2);
}

void main(void){
	int i;
	for(i= 0; i <10; i ++)
		printf(" %d\n " , fibonacci (i));
}
