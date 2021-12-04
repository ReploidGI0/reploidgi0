/*
Title: Practicas de Capitulo 2 ARM Raspberry Pi
Filename: tipos5.c
Author: Espericueta Lopez Gilberto
Date: 05/12/2021
Description: Muestra la suma de un vector
Input:
Output: 0
*/
#include <stdio.h>
void main(void){
	int i;
	long long suma ;
	int vector [5]= {1600000000 , -100 , 800000000 , -50 , 200};

	for ( suma = i = 0; i <5; i ++ ){
		suma += vector [i ];
	}
	printf (" La suma es %d \n" , suma );
}

