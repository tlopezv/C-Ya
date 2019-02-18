// NOTA: instrucción de compilación "gcc -g programa10.c"
// Realizar un programa que solicite la carga por teclado de dos números, 
// si el primero es mayor al segundo informar su suma y diferencia, en caso 
// contrario informar el producto y la división del primero respecto al segundo.
#include<stdio.h>

int main()
{
    // Definimos las variables
    int num1,num2, suma, diferencia, producto, division;
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
        // Una operación debe tener el operador de asignación "="
        suma = num1 + num2;
        diferencia = num1 - num2;
        // Mostramos los resultados por pantalla
        printf("La suma de los dos valores es:");
        printf("%i",suma);
        // Para hacer el salto de línea pasamos a la función "printf" el parámetro "\n" el cúal reconoce como un salto de línea
        printf("\n");
        printf("La diferencia de los dos valores es:");
        printf("%i",diferencia);
    }
    else // El segundo bloque de llaves representa la rama del falso
    {
        // Una operación debe tener el operador de asignación "="
        producto = num1 * num2;
        division = num2 / num1;
        // Mostramos los resultados por pantalla
        printf("El producto de los dos valores es:");
        printf("%i",producto);
        // Para hacer el salto de línea pasamos a la función "printf" el parámetro "\n" el cuál reconoce como un salto de línea
        printf("\n");
        printf("La división de %i entre %i es:",num2,num1);
        printf("%i",division);
    }
    getchar();
    return 0;
}