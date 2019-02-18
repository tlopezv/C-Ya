// NOTA: instrucción de compilación "gcc -g programa3.c"
// Para poder utilizar las funciones "printf", "scanf" y "getchar" debemos importar el archivo donde se declaran
#include<stdio.h>

// La función "main" es donde disponemos nuestro algoritmo
int main()
{
    // Definimos las variables 
    int num1, num2, suma, producto;
    // Mostramos un mensaje por pantalla
    printf("Ingrese primer valor:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num1);
    // Mismos pasos para la carga del segundo número
    printf("Ingrese segundo valor:");
    scanf("%i",&num2);
    // Una operación debe tener el operador de asignación "="
    suma = num1 + num2;
    producto = num1 * num2;
    // Mostramos los resultados por pantalla
    printf("La suma de los dos valores es:");
    printf("%i",suma);
    // Para hacer el salto de línea pasamos a la función "printf" el parámetro "\n" el cúal reconoce como un salto de línea
    printf("\n");
    printf("El producto de los dos valores es:");
    printf("%i",producto);
    getchar();
    return 0;
}