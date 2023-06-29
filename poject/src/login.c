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

bool user_create(Login usuario)
{
    FILE* file = fopen("user.txt", "a+"); //abrir y/o crear archivo user.txt en modo escritura
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return false;
    }
    fprintf(file, "%s,%s,%d,%d\n", usuario.user, usuario.pass, usuario.privilege, usuario.loginStatus);
    fclose(file); // cerrar archivo avirto con fopen file
    return true;

}

bool user_authenticate(const char* username, const char* password)
{
    char line[20];
    char *token;

    FILE* file = fopen("user.txt", "r"); //abrir archivo user.txt en modo solo lectura
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

bool user_modified(const char* username, const char* password)
{
    
    char line[20];
    char *token;

    FILE* file = fopen("user.txt", "a+"); //abrir archivo user.txt en modo escritura
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
        fclose(file); // cerrar archivo avirto con fopen file
    }

    if(strcmp(username, usuario.user) == 0 && strcmp(password,  usuario.pass) == 0)
    {
        printf("digite el nuevo nombre de usuario\n");
        scanf("%s", usuario.user);
        printf("digite el nuevo password\n");
        scanf("%s", usuario.pass);
        FILE* temp = fopen("temp.txt", "a+"); //abrir archivo user.txt en modo escritura
        if (file == NULL)
        {
            printf("Error opening file.\n");
            return false;
        }
        else
        {
            fprintf(temp, "%s,%s,%d,%d\n", usuario.user, usuario.pass, usuario.privilege, usuario.loginStatus);
            fclose(temp); // cerrar archivo avirto con fopen file
            if (remove("user.txt") == 0)
                printf("The file is deleted successfully.\n");
            if (rename("temp.txt", "user.txt")==0)
                printf("The file is rename successfully.\n");
            if (remove("temp.txt") == 0)
                printf("The file is deleted successfully.\n");
        }
        Sleep(1000);
        return true;
    }
    else
    {
        printf("No se encontro el usuario\n");
        Sleep(1000);
        return false;
    }
}

bool user_delete(const char* username, const char* password)
{

}