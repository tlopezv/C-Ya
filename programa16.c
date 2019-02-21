// NOTA: instrucción de compilación "gcc -g programa16.c"
// Confeccionar un programa que permita cargar un número entero positivo 
// de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. 
// Mostrar un mensaje de error si el número de cifras es mayor.
#include<stdio.h>

int main()
{
    // Definimos las variables
    int numero;
    // Mostramos un mensaje por pantalla
    printf("Ingrese un numero entero positivo:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&numero);
    // El primer bloque después del "if" representa la rama del verdadero
    if (numero < 1000)
    {
        if (numero >=100)
        {
            // Mostrar un mensaje indicando que el número tiene 3 cifras.
            printf("El numero %i tiene 3 cifras",numero);    
        } 
        else
        {
            if (numero >= 10)
            {
                // Mostrar un mensaje indicando que el número tiene 2 cifras.
                printf("El numero %i tiene 2 cifras",numero);
            }
            else
            {
                // Mostrar un mensaje indicando que el número tiene 1 cifra.
                printf("El numero %i tiene 1 cifra",numero);
            }
            
        }
        
    }
    else // El segundo bloque de llaves representa la rama del falso
    {
        // Mostrar un mensaje de error porque el número tiene más de 3 cifras.
        printf("El numero %i tiene mas de 3 cifras",numero);
    }
    getchar();
    return 0;
}