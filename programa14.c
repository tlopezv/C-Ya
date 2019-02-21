// NOTA: instrucción de compilación "gcc -g programa14.c"
// Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.
#include<stdio.h>

int main()
{
    // Definimos las variables
    int num1,num2,num3;
    // Mostramos un mensaje por pantalla
    printf("Ingrese el primer numero:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num1);
    // Mismos pasos para la entrada del segundo y tercer número
    printf("Ingrese el segundo numero:");
    scanf("%i",&num2);
    printf("Ingrese el tercer numero:");
    scanf("%i",&num3);
    // El primer bloque después del "if" representa la rama del verdadero
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            // Mostramos por pantalla que el num1 es el mayor
            printf("El mayor de todos los numeros es: %i",num1);
        }
        else 
        {
            // Mostramos por pantalla que el num3 es el mayor
            printf("El mayor de todos los numeros es: %i",num3);
        }
    }
    else // El segundo bloque de llaves representa la rama del falso
    {
        if (num2 > num3)
        {
            // Mostramos por pantalla que el num2 es el mayor
            printf("El mayor de todos los numeros es: %i",num2);
        }
        else 
        {
            // Mostramos por pantalla que el num3 es el mayor
            printf("El mayor de todos los numeros es: %i",num3);
        }
    }
    getchar();
    return 0;
}