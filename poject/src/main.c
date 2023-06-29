/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 99-0544                                     */
/*  Seccion:   Sabados                                     */
/*  Practica:  Projecto                                    */
/*  Fecha:     22/1/2022                                   */
/***********************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <login.h>

Login login;

int main(int argc, char const *argv[])
{
    // printf("Introduzca el nombre de usuario\n");
    // scanf("%s", &login.user);
    // printf("Introduzca el password\n");
    // scanf("%s", &login.pass);
    // printf("instroduzca privilegio\n");
    // scanf("%d", &login.privilege);
    // addUser(login);

    printf("Por favor logese al sistema\n");
    printf("Introduzca el nombre de usuario\n");
    scanf("%s", &login.user);
    printf("Introduzca el password\n");
    scanf("%s", &login.pass);
    if(authenticate(login.user, login.pass) == true)
         printf("logeado\n");
    else
        printf("no logeado\n");
    return 0;
}


