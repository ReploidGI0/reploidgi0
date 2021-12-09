/*
Title: Practicas de Capitulo 3 ARM Raspberry Pi
Filename: minimovector.c
Author: Espericueta Lopez Gilberto
Date: 08/12/2021
Description: Muestra el valor mínimo de un vector definido
Input:
Output: -5
*/
#include <stdio.h>
int minimo(int* v, int len){
	int i, min;

	min= v[0];
	for(i= 1; i<len; i++)
		if(v[i]<min)
			min=v[i];
	return min;
}

int vect []= { 8, 10, -3, 4, -5, 50, 2, 3 };

void main(void){
	printf("%d\n", minimo(vect, 8));
}
