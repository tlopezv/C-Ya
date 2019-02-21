// NOTA: instrucción de compilación "gcc -g programa15.c"
// Se ingresa por teclado un valor entero, mostrar una leyenda 
// que indique si el número es positivo, negativo o nulo (es decir cero)
#include<stdio.h>

int main()
{
    // Definimos las variables
    int numero;
    // Mostramos un mensaje por pantalla
    printf("Ingrese un numero:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&numero);
    // El primer bloque después del "if" representa la rama del verdadero
    if (numero > 0) 
    {
        // Mostramos que es un número positivo
        printf("El numero es positivo");
    }
    else // El segundo bloque de llaves representa la rama del falso
    {
        if (numero < 0)
        {
            // Mostramos que es un número negativo
            printf("El numero es negativo");
        }
        else
        {
            // Mostramos que es un número es nulo (es decir cero)
            printf("El numero es nulo (es decir cero");
        }
        
    }
    getchar();
    return 0;
}