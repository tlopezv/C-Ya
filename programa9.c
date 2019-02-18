// NOTA: instrucción de compilación "gcc -g programa9.c"
#include<stdio.h>

int main()
{
    // Definimos las variables
    int num1, num2;
    // Mostramos un mensaje por pantalla
    printf("Ingrese primer valor:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num1);
    // Mismos pasos para la carga del segundo número
    printf("Ingrese segundo valor:");
    scanf("%i",&num2);
    // El primer bloque después del "if" representa la rama del verdadero
    if (num1 > num2)
    {
        printf("%i",num1);
    }
    else // El segundo bloque de llaves representa la rama del falso.
    {
        printf("%i",num2);
    }
    getchar();
    return 0;
}