/*
Title: Practicas de Capitulo 3 ARM Raspberry Pi
Filename: subrut5.c
Author: Espericueta Lopez Gilberto
Date: 08/12/2021
Description:
Input:
Output: 194, 455, 1024
*/
#include <stdio.h>
int poly3(int a , int b, int c, int d, int x){
	return a*x*x*x + b*x*x + c*x + d;
}
void main(void){
	printf("%d\n%d\n%d\n",
		poly3(1 , 2, 3, 4, 5),
		poly3(1 , -1 , 1 , -1 , 8),
		poly3(2 , 0, 0, 0, 8));
}
