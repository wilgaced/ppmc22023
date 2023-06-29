/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 99-0544                                     */
/*  Seccion:   Sabados                                     */
/*  Practica:  Puntuable No 1                              */
/*  Fecha:     24/5/2023                                   */
/***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//defines 

//global variables
char opcion = 0;

/* array unidimencinales*/
float A[3][3] = {0.0};
float B[3][3] = {0.0};
float R[3][3] = {0.0};

//funciones prototype
void suma(void);

int main(int argc, char const *argv[])
{
    printf("introduzca la matriz A\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%f", &A[i][j]);
        }
        printf("\n");
        
    }
    printf("introduzca la matriz B\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           scanf("%f", &B[i][j]);
        }
         printf("\n");
    }

    printf("Que operacion desea realizar");
    fflush(stdin);
    scanf("%c", &opcion);
    switch (opcion)
    {
    case '+':
        suma();
        break;
    
    default:
        break;
    }
    


    return 0;
}

void suma(void)
{
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           R[i][j] = A[i][j] + B[i][j];
           printf("%lf , %lf  = %lf", A[i][j], B[i][j], R[i][j]);
        }
        
    }
 
}
