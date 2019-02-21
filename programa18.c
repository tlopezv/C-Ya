// NOTA: instrucción de compilación "gcc -g programa18.c"
#include<stdio.h>

int main()
{
    // Definimos las variables
    int num1,num2,num3;
    // Mostramos un mensaje por pantalla
    printf("Ingrese primer valor:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num1);
    // Mismos pasos para la entrada del segundo y tercer número
    printf("Ingrese segundo valor:");
    scanf("%i",&num2);
    printf("Ingrese tercer valor:");
    scanf("%i",&num3);
    // El primer bloque después del "if" representa la rama del verdadero
    if ( num1 > num2 && num1 > num3)
    {
        // Mostramos por pantalla que el num1 es el mayor
        printf("%i",num1);
    }
    else // El segundo bloque de llaves corresponde con la rama del falso
    {
        if (num2 > num3)
        {
            // Mostramos por pantalla que el num2 es el mayor
            printf("%i",num2);
        }
        else
        {
            // Mostramos por pantalla que el num3 es el mayor
            printf("%i",num3);
        }
        
    }
    getchar();
    return 0;
}