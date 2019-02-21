// NOTA: instrucción de compilación "gcc -g programa13.c"
#include<stdio.h>

int main()
{
    // Definimos las variables
    int nota1,nota2,nota3,promedio;
    // Mostramos un mensaje por pantalla
    printf("Ingrese primera nota:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&nota1);
    // Mismos pasos para la entrada de la segunda y la tercera nota
    printf("Ingrese segunda nota:");
    scanf("%i",&nota2);
    printf("Ingrese tercera nota:");
    scanf("%i",&nota3);
    // Una operación debe tener el operador de asignación "="
    promedio=(nota1 + nota2 + nota3) / 3;
    // El primer bloque después del "if" representa la rama del verdadero
    if (promedio >= 7)
    {
        // Mostramos el mensaje "Promocionado"
        printf("Promocionado");
    }
    else // El segundo bloque de llaves representa la rama del falso
    {
        if (promedio >=4)
        {
            // Mostramos el mensaje "Regular"
            printf("Regular");
        }
        else
        {
            // Mostramos el mensaje "Reprobado"
            printf("Reprobado");
        }
    }
    getchar();
    return 0;
}