// NOTA: instrucción de compilación "gcc -g programa12.c"
// Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) 
// mostrar un mensaje indicando si el número tiene uno o dos dígitos.
// (Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero) 
#include<stdio.h>

int main()
{
    // Definimos las variables
    int num;
    // Mostramos un mensaje por pantalla
    printf("Ingrese un valor entero de 1 o 2 digitos:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num);
    // El primer bloque después del "if" representa la rama del verdadero
    if (num > 0 && num < 10)
    {
        // Mostramos el resultado por pantalla
        printf("El número %i tiene un sólo dígito",num);
    } 
    else // El segundo bloque de llaves representa la rama del falso
    {
        // Mostramos el resultado por pantalla
        printf("El número %i tiene dos dígitos",num);
    }
    getchar();
    return 0;
}