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
#include <string.h>

//defines 
#define MAX 12

//global variables

/* array unidimencinales*/
char carray1[10] = {"Wilkins"};
float farray1[10] = {10.25,35.2,10.8,25.3};

/* array bidimencinales*/
char carray2[100][100] = {"Wilkins","carlos","jose"};

int main(int argc, char const *argv[])
{
    //accesar a un posicio en escpecifico
    carray1[3] = 'G';

    //copiar un array a otro affar
    strcpy(carray1, "Gabriel");
    
    //para recorrer un array unidimensional utilizamos un for 
    for (int i = 0; i < sizeof(carray1); i++)
    {
        printf("%c ", carray1[i]);
    }
    
    //para recorrer un array utilizamos de floats un for 
    for (int i = 0; i < sizeof(carray1); i++)
    {
        printf("%lf ", farray1[i]);
    }

    //para accesar a una posicion de un array bidimensional
    carray2[2][4] = 'l';
    carray2[2][5] = 'u';
    carray2[2][6] = 'i';
    carray2[2][7] = 's';

    //para recorrer un array bidimencinal
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", carray2[i][j]);
        }
        
    }
        
    return 0;
}
