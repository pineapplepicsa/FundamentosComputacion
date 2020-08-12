#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num,b,edd,nac,dia,c,d,u;
     char nom[30],dicc,esc,fac,mes,l;
     float prom;
     int po,x;
    do
    {
    printf("SOLICITUD DE INGRESO A LA UNIVERSIDAD\n\n\n");
    printf("1)Facultades disponibles: \n");
    printf("2)Registro de alumnos: \n");
    printf("3)Horarios disponlibles: \n");
    printf("4)Fecha para presentar el examen: \n");
    printf("5)Presiona 5 para finalizar\n\n");
    printf("Selecciona una opcion:  ");

    scanf("%d",&num);

    switch(num)
    {
    case 1:
    system("cls");
    printf("FACULTADES DISPONIBLES: \n");
    printf("1)Ingenieria: \n  ingenieria en sistemas\n  \n\n");
    printf("2)Medicina: \n  medicina forense\n urologia\n\n");
    printf("3)Psicologia: \n  Psicologia educativa \n  \n");
    printf("4)Odontologia: \n Dentista Pediatrico\n  \n");
    printf("5)Arte: \n  Escultura\n\n");
    printf("7)Idiomas: \n Relaciones internacionales\n \n");
    printf("8)Derecho: \n Derecho Civil\n\n");
    printf( "Presione cualquier tecla para continuar: ");
    scanf("%d",&b);
    system("cls");
     break;


    case 2:
        system("cls");
        printf("REGISTRO DE ALUMNOS\n\n");
        printf("Cuantos alumnos quiere registrar\?");
        scanf("%d", &po);
        for(x=1;x<=po;x++)
         {
        printf("Nombre completo:  ");
        scanf("%s", &nom);
        printf("Año de nacimiento: ");
        scanf("%d",&nac);
        if (nac>2016)
        {
        printf("DATOS ERRONESOS,INTENTE DE NUEVO\n");
                printf("año de nacimiento:  ");
        scanf("%d",&nac);
        }







        printf("Dia de nacimiento: ");
        scanf("%d", &dia);
        printf("Mes de nacimiento:  ");
        scanf("%s", &mes);
        printf("Edad:  ");
        scanf("%d", &edd);
        printf("Escuela bachillerato de proveniencia: ");
        scanf("%s", &esc);
        printf("Promedio: ");
        scanf("%f", &prom);

        printf("Direccion de domicilio: ");
        scanf("%s", &dicc);
        printf("Facultad a ingresar: ");
        scanf("%s", &fac);
        if (prom<6)
        {
         printf("tu promedio no a alcanzado el rango estabelcido para ingresar a la universidad\n");
        }
        else
        {
          printf("tu promedio a alcanzado el rango estabelcido para ingresar a la universidad\n");
        }

         }


        printf("\n");
        printf("Tus datos se han guardado correctamente\n\n");
        printf("Presione cualquier tecla para continuar:  ");
        scanf("%d",&c);
        system("cls");
        break;

    case 3:
        system("cls");
        printf("HORARIOS DISPONBLES\n\n");
        printf("Ingenieria: Lunes a viernes de 8am a 2pm\n");
        printf("Medicina: Lunes a Viernes de 7am a 4pm\n ");
        printf("Psicologia: Lunes Miercoles y Viernes de 12pm a 7pm\n");
        printf("Odontologia: Lunes a Jueves de 7am a 3pm\n");
        printf("Artes: Martes a Jueves de 10am a 5pm\n");
        printf("Arquitectura y diseño: Lunes a viernes de 8am a 12pm\n");
        printf("Idiomas: Lunes a Jueves de 10 am a 4pm\n");
        printf("Derecho: Lunes a Viernes de 8am a 2pm\n\n") ;
        printf("Presione cualquier tecla para continuar: ");
        scanf("%d",&d);
        system("cls");
        break;

    case 4:
        system("cls");
        printf("FECHAS PARA ENTREGAR EXAMEN DE INGRESO\n\n");
        printf("Ingenieria: Lunes 7 de octubre de 8am a 10 am - aula 5\n ");
        printf("Medicina: Martes 8 de octubre de 9 am a 11 am - aula 10\n");
        printf("Psicologia: Miercoles 9 de octubre de 9am a 11 am - aula 3\n");
        printf("Arte: Martes 8 de octubre de 10am a 12pm - aula 14\n");
        printf("Odontologia: Lunes 7 de octubre de 10am a 12pm - aula 6\n");
        printf("Derecho: Jueves 10 de octubre de 11am a 1pm - aula 1\n");
        printf("idiomas: Viernes 11 de octubre de 12pm a 2pm - aula 4\n");
        printf("\n");
        printf("Presentarse el dia indicado en las instalaciones del plantel\n\n");
        printf("Presione cualquier tecla para continuar:  ");
        scanf("%d",&u);
        system("cls");
        break;

    case 5:


       system("cls");
       getch();
        break;





     case 0:
    default:
    printf("ESTA OPCION ES DESCONOCIDA\n\n");
    break;

    }
    }
    while (num !=0);
    return 0;
}
