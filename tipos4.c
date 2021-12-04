/*
Title: Practicas de Capitulo 2 ARM Raspberry Pi
Filename: tipos4.c
Author: Espericueta Lopez Gilberto
Date: 05/12/2021
Description: Muestra en pantalla la suma de un vector
Input: 128, 32, 100, -30, 124
Output: La suma es 354
*/
#include <stdio.h>
void main ( void ){
	int i , suma ;
	int vector [5]= {128 , 32 , 100 , -30 , 124};
	for ( suma = i = 0; i <5; i ++ ){
		suma += vector [i ];
	}
	printf (" La suma es %d \n" , suma );
}
