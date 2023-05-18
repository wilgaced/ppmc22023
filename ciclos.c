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

//defines 
#define MAX 12

//global variables


int main(int argc, char const *argv[])
{
    int k = 0;
    int m = 0;
    char key = 0;
    for (int i = 0; i <= MAX; i++)
    {
        for (int j = 0; j <= MAX; j++) //for anidada este se ejecutara i veces
        {
             printf("%d x %d = %d\n", i , j , i*j);// ejecucin del for anidad
        }  
         printf("\n");     
    }

    printf("con el while ahora\n");
    while (k <= MAX)
    {
        m = 0;
        while(m <= MAX)
        {
            printf("%d x %d = %d\n", k , m , k*m);
            m++; 
        }
        printf("\n");
        k++;        
    }

    printf("\n");
    printf("el do while se ejecutara una vez sin importar la condicin de verdad de la esprecion\n");
    key = 'x';
    while (key != 'x')
        printf("no se ejecutara\n");
    
    do
    {
        printf("desea salir x: ");
        scanf("%c", &key);
         printf("\n");
    } while (key != 'x');
    
    
    return 0;
}
