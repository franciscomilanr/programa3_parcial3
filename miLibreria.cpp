/*
Autor: Franciscomilan
Realizado: 07/04/22
Escuela: Universidad UVM
Materia: Programacion Estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Libreria personalizada .cpp en C del parcial  para funciones comunes de programa en C,
para la materia programacion estructurada 
*/ 

//Incluir libreria .h
#include "miLibreria.h"		

//Funcion leer cadena
void leers(char *mensaje, char s[], int n) {
	printf(mensaje);
	fflush(stdin);	
	fgets(s,n,stdin);
	fflush(stdin);
	if (s[strlen(s)-1]=='\n') {
		s[strlen(s)-1]=0;
	}
}

//Funcion leer flotante
float leerf(char *mensaje, float inferior, float superior) {
	float valor;
	do {
		printf(mensaje);
		scanf("%f",&valor);
		if (valor<inferior || valor>superior); {
			printf("Dato invalido !!! Debe estar entre (%.2f - %.2f). Vuelve a introducirlo: \n", inferior, superior);
		}
	}while (valor<inferior || valor>superior);
	//Retorno
	return valor;
}

//Funcion leer entero
int leerd(char *mensaje, int inferior, int superior) {
	int valor;
	do {
		printf(mensaje);
		scanf("%d",&valor);
		if (valor<inferior || valor>inferior) {
			printf(" Dato invalido !!! Debe estar entre (%d - %d). Vuelva a introducirlo: \n", inferior, superior);
		}
	}while (valor<inferior || valor>superior);
	//Retorno
	return valor;
}
