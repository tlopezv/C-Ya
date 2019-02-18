// NOTA: instrucción de compilación "gcc -g programa6.c"
// Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.
#include<stdio.h>

int main()
{
    // Definimos las variables 
    int num1, num2, num3, num4, suma, promedio;
    // Mostramos un mensaje por pantalla
    printf("Ingrese primer valor:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num1);
    // Mismos pasos para la carga del segundo número
    printf("Ingrese segundo valor:");
    scanf("%i",&num2);
    // Mismos pasos para la carga del tercer número
    printf("Ingrese tercer valor:");
    scanf("%i",&num3);
    // Mismos pasos para la carga del cuarto número
    printf("Ingrese cuarto valor:");
    scanf("%i",&num4);
    // Una operación debe tener el operador de asignación "="
    suma = num1 + num2 + num3 + num4;
    promedio = suma / 4;
    // Mostramos los resultados por pantalla
    printf("La suma de %i, %i, %i y %i es:",num1,num2,num3,num4);
    printf("%i",suma);
    // Para hacer el salto de línea pasamos a la función "printf" el parámetro "\n" el cúal reconoce como un salto de línea
    printf("\n");
    printf("El promedio de los dos valores es:");
    printf("%i",promedio);
    getchar();
    return 0;
}