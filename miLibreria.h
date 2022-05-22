/* 
Autor: Franciscomilan
Realizado: 07/04/22
Escuela: Universidad UVM
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Libreria personalizada .h de 2 parcial en C, contiene funciones comunes de programa en C
para la materia programacion estructurada  
*/

//Definir libreria
#ifndef _miLibreria 	
#define _miLibreria

#include<stdio.h>
#include<string.h>

//Prototipos de funcion
void leers(char *mensaje, char s[], int n);
float leerf(char *mensaje, float inferior, float superior);
int leerd(char *mensaje, int inferior, int superior);

#include "miLibreria.cpp"	

//Fin .h			
#endif 