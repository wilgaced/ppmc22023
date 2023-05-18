/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 99-0544                                     */
/*  Seccion:   Sabados                                     */
/*  Practica:  Puntuable No 1                              */
/*  Fecha:     23/1/2021                                   */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141516326

// varible globales...
int op1, op2, result;
const float PI2 = 3.14151632

// prototio de funcines
float suma(float a, float b);

int main(int argc, char const *argv[])
{
    system("cls");
    printf("Calculadora que suma dos numeros.\n");
    printf("Introduzca el primer numero :");
    scanf("%d", &op1); // pedimos el primier numero por el teclado
    printf("Introduzca el segundo numero :");
    scanf("%d", &op2);       // pedimos el primier numero por el teclado
    result = suma((float)op1, (float)op2); // llamda a la funcion suma
    printf("El resultado de la suma de %2.2f + %2.2f = %2.2f", op1, op2, result);
    return 0;
}

/*funcion suma*/
/*resive 2 float a , b/*
/*devuelve la suma a + b de los flotantes*/
float suma(float a, float b)
{
    return a + b;
}