/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 99-0544                                     */
/*  Seccion:   Sabados                                     */
/*  Practica:  Header calculadora                          */
/*  Fecha:     22/1/2022                                   */
/***********************************************************/

#ifndef LOGING_H
#define LOGING_H

#include <stdbool.h>


typedef struct 
{
    char user[20];
    char pass[20];
    int privilege;
    int loginStatus;
}Login;




//Prototipo de funcion
bool authenticate(const char* username, const char* password);
bool addUser(Login usuario);

#endif //LOGIN_H