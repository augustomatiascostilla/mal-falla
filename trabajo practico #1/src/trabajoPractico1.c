/*
 ============================================================================
 Name        : trabajoPractico1.c
 Author      : Augusto Matias Costilla
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf(stdout, NULL);
	int  A;
	int B;
	int menu;
	int resultado;
	int respuesta;
	float resultadoFlotante;

	utn_getNumero(&A,"ingrese el 1er operando entre -1000 y 1000: ","Error! solo valores entre -1000 y 1000 admitidos: ",-1000,1000,3);
	utn_getNumero(&B,"ingrese el 2do operando entre -1000 y 1000: ","Error! solo valores entre -1000 y 1000 admitidos: ",-1000,1000,3);
	do{
		utn_getNumero(&menu,
		"Por favor seleccione la operacion que desea realizar:\n1-para sumar\n2-para restar\n3-para multiplicar\n4-para dividir\n5-para calcular factorial\n6-para finalizar...",
		"Error! \n1-para sumar\n2-para restar\n3-para multiplicar\n4-para dividir\n5-para calcular factorial\n6-para finalizar..",1,6,3);
		if(menu!=6){
			switch(menu){
					case 1:
						suma(&resultado,A,B);
						printf("el resultado %d+%d es: %d\n",A,B,resultado);
						break;
					case 2:
						resta(&resultado,A,B);
						printf("el resultado %d-%d es: %d\n",A,B,resultado);
						break;
					case 3:
						multiplicacion(&resultado,A,B);
						printf("el resultado %d*%d es: %d\n",A,B,resultado);
						break;
					case 4:
						respuesta=divicion(&resultadoFlotante,A,B);
						if(respuesta==0){
							printf("el resultado %d/%d es: %.2f\n",A,B,resultadoFlotante);
							break;
						}else{
							printf("Error! no es posible dividir por 0\n");
							break;
						}
					case 5:
						printf("el factorial de %d es: %d y el factorial de %d es %d\n",A,factorial(A),B,factorial(B));
						break;
					}
		}else{
			break;
		}
	}while(1);


	return EXIT_SUCCESS;
}
