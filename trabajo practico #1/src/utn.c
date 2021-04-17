/*
 * utn.c
 *
 *  Created on: 16 abr. 2021
 *      Author: Augusto Matias Costilla
 */

#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int min, int max, int reintentos){
	int bufferInt, ret=-1;
	if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && min<=max && reintentos>-1)
	{
		printf("%s",mensaje);
		scanf("%d",&bufferInt);
		while(reintentos>0){
			if(bufferInt<min || bufferInt>max){
				printf("%s",mensajeError);
				scanf("%d",&bufferInt);
				reintentos--;
			}else{
				*pResultado=bufferInt;
				ret=0;
				break;
			}
		}
	}

	return ret;
}


int utn_getChar(char *pResultado, char *mensaje, char *mensajeError, char min, char max, int reintentos){
	char bufferChar, ret=-1;
	if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && min<=max && reintentos>-1)
	{
		printf("%s",mensaje);
		fflush(stdin);
		scanf("%c",&bufferChar);
		while(reintentos>0){
			if(bufferChar<min || bufferChar>max){
				printf("%s",mensajeError);
				scanf("%c",&bufferChar);
				reintentos--;
			}else{
				*pResultado=bufferChar;
				ret=0;
				break;
			}
		}
	}

	return ret;
}

int utn_getNumeroFlotante(float *pResultado, char *mensaje, char *mensajeError, float min, float max, int reintentos){
	float bufferFloat, ret=-1;
	if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && min<=max && reintentos>-1)
	{
		printf("%s",mensaje);
		scanf("%f",&bufferFloat);
		while(reintentos>0){
			if(bufferFloat<min || bufferFloat>max){
				printf("%s",mensajeError);
				scanf("%f",&bufferFloat);
				reintentos--;
			}else{
				*pResultado=bufferFloat;
				ret=0;
				break;
			}
		}
	}

	return ret;
}


/*========================================================*/
void suma(int *pResultado, int A, int B)
{
	*pResultado=A+B;
}

void resta(int *pResultado, int A, int B)
{
	*pResultado=A-B;
}

void multiplicacion(int *pResultado, int A, int B)
{
	*pResultado=A*B;
}

int divicion(float *pResultado, int A, int B)
{
	int retorno=-1;
	if(pResultado!=NULL && B!=0)
	{
		*pResultado=A/B;
		retorno=0;
	}
	return retorno;
}

int factorial(int num){
	int aux;
	if(num==1){
		aux=1;
	}else{
		aux=num*factorial(num-1);
	}
	return aux;
}




















