/*
Title: Practicas de Capitulo 3 ARM Raspberry Pi
Filename: subrut1.c
Author: Espericueta Lopez Gilberto
Date: 08/12/2021
Description: Programa que funciona en conjunto con mysrand que da un
numero pseudoaleatorio
Input:
Output:
*/
#include <stdio.h>
void main(void){
	int i;
	mysrand(42);
	for (i= 0; i <5; i ++){
		printf("%d\n" , myrand());
	}
}
