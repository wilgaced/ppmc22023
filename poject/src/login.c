/***********************************************************/
/*           Programación para mecatrónicos                */
/*  Nombre:    Wilkins Cedano                              */
/*  Matricula: 99-0544                                     */
/*  Seccion:   Sabados                                     */
/*  Modulo:    login.c                                     */
/*  Fecha:     26/6/2023                                   */
/***********************************************************/

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <login.h>

Login usuario;

bool addUser(Login usuario)
{
    FILE* file = fopen("user.txt", "a+");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return false;
    }
    fprintf(file, "%s,%s,%d,%d\n", usuario.user, usuario.pass, usuario.privilege, usuario.loginStatus);
    fclose(file);
    return true;

}

bool authenticate(const char* username, const char* password)
{
    char line[20];
    char *token;

    FILE* file = fopen("user.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return false;
    }
    else
    {
        fgets(line, 20, file); // leer linea completa
        token = strtok(line, ","); // separar los string por las comas
        strcpy(usuario.user, token); // copia lo separdo en con srtok y copialo en usuario.user
        token = strtok(NULL, ","); // separa la siguiente palabra 
        strcpy(usuario.pass, token); // copiala en usuario.pass

    }

    if(strcmp(username, usuario.user) == 0 && strcmp(password,  usuario.pass) == 0)
    {
        printf("login Succefully\n");
        Sleep(1000);
        return true;
    }
    else
    {
        printf("login Faild\n");
        Sleep(1000);
        return false;
    }
}