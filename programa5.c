// NOTA: instrucción de compilación "gcc -g programa5.c"
// Escribir un programa en el cual se ingresen cuatro números, 
// calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto. 
#include<stdio.h>

int main()
{
    // Definimos las variables 
    int num1, num2, num3, num4, suma, producto;
    // Mostramos un mensaje por pantalla
    printf("Ingrese primer valor:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num1);
    // Mismos pasos para la carga del segundo número
    printf("Ingrese segundo valor:");
    scanf("%i",&num2);
    // Una operación debe tener el operador de asignación "="
    suma = num1 + num2;
    // Mostramos los resultados por pantalla
    printf("La suma de %i y %i es:",num1,num2);
    printf("%i",suma);
    // Para hacer el salto de línea pasamos a la función "printf" el parámetro "\n" el cúal reconoce como un salto de línea
    printf("\n");
    // Mostramos un mensaje por pantalla
    printf("Ingrese tercer valor:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num3);
    // Mismos pasos para la carga del cuarto número
    printf("Ingrese segundo valor:");
    scanf("%i",&num4);
    // Una operación debe tener el operador de asignación "="
    producto = num3 * num4;
    // Mostramos los resultados por pantalla
    printf("La multiplicación de %i y %i es:",num3,num4);
    printf("%i",producto);
    getchar();
    return 0;
}