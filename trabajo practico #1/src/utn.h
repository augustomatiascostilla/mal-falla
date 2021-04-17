/*
 * utn.h
 *
 *  Created on: 16 abr. 2021
 *      Author: Augusto Matias Costilla
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int min, int max, int reintentos);
int utn_getNumeroFlotante(float *pResultado, char *mensaje, char *mensajeError, float min, float max, int reintentos);
int utn_getChar(char *pResultado, char *mensaje, char *mensajeError, char min, char max, int reintentos);

void suma(int *pResultado, int A, int B);
void resta(int *pResultado, int A, int B);
void multiplicacion(int *pResultado, int A, int B);
int divicion(float *pResultado, int A, int B);
int factorial(int num);

#endif /* UTN_H_ */
