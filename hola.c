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

//varible globales...
float op1, op2, result;

//prototio de funcines 
float suma(float a, float b);

int main(int argc, char const *argv[])
{
   system("cls");
   printf("Calculadora que suma dos numeros.\n");
   printf("Introduzca el primer numero :");
   scanf("%f", &op1); // pedimos el primier numero por el teclado
   printf("Introduzca el segundo numero :");
   scanf("%f", &op2); // pedimos el primier numero por el teclado
   result = suma(op1 , op2);
   printf("El resultado de la suma de %2.2f + %2.2f = %2.2f", op1, op2, result); 
   return 0;
}

float suma(float a, float b)
{
    return a + b;
}