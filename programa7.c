// NOTA: instrucción de compilación "gcc -g programa7.c"
// Se debe desarrollar un programa que pida el ingreso del precio de un artículo 
// y la cantidad que lleva el cliente. 
// Mostrar lo que debe abonar el comprador.
// Definir una variable float para el precio del artículo.
#include<stdio.h>

int main()
{
    // Definimos las variables
    float precio, abonar;
    int cantidad;
    // Mostramos un mensaje por pantalla
    printf("Ingrese el precio del artículo:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%f",&precio);
    // Mismos pasos para la cantidad de artículos
    printf("Indique la cantidad de artículos:");
    scanf("%i",&cantidad);
    // Una operación debe tener el operador de asignación "="
    abonar = precio * cantidad;
    // Mostramos los resultados por pantalla
    printf("Se deberá abonar:");
    printf("%f",abonar);
    getchar();
    return 0;
}