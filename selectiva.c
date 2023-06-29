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

//variable global 
char opcion = '\0'; 

//prototipos de funcion
void menu_secundario(void);

int main(int argc, char const *argv[])
{
    printf("Ejemplo de selecion\n");
    printf("Elija una opcion\n");
    scanf("%c", &opcion);
    if (opcion == 'x')
    {
       printf("Se termina el programa\n");
       return 0;
    }
    else
    {
        printf("Continua el programa\n");
    }
        
    printf("Ejemplo de selecion multiple\n");
    printf("Menu principal de lo que sea que estes haciendo\n");
    printf("para menu A presione 1\n");
    printf("para menu B presione 2\n");
    printf("para menu C presione 3\n");
    printf("para menu D presione 4\n");
    fflush(stdin);
    scanf("%c", &opcion);
    switch (opcion)
    {
    case '1':
         printf("Usted eligio el menu A\n");
        break;
    case '2':
         printf("Usted eligio el menu B\n");
        break;
    case '3':
         printf("Usted eligio el menu C\n");
        break;
    case '4':
         printf("Usted eligio el menu secundario\n");
         menu_secundario();
        break;
    default:
        printf("Usted ingreso una opcion no valida\n");
        break;
    }
    // if (opcion == 1)
    // {
    //    printf("Usted eligio el menu A\n");
    // }
    // else if (opcion == 2)
    // {
    //     printf("Usted eligio el menu B\n");
    // }
    // else if (opcion == 3)
    // {
    //    printf("Usted eligio el menu C\n");
    // }
    // else if (opcion == 4)
    // {
    //    printf("Usted eligio el menu D\n");
    // }

    return 0;
}

void menu_secundario(void) 
{
    printf("Ejemplo de selecion multiple\n");
    printf("Menu Secundario de lo que sea que estes haciendo\n");
    printf("para menu A presione 1\n");
    printf("para menu B presione 2\n");
    printf("para menu C presione 3\n");
    printf("para menu D presione 4\n");
    fflush(stdin);
    scanf("%c", &opcion);

     if (opcion == '1')
     {
        printf("Usted eligio el menu A\n");
     }
     else if (opcion == '2')
     {
         printf("Usted eligio el menu B\n");
     }
     else if (opcion == '3')
     {
        printf("Usted eligio el menu C\n");
     }
     else if (opcion == '4')
     {
        printf("Usted eligio el menu D\n");
     }
     else
     {
        printf("Opcion no valida\n");
     }
     
}