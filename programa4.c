// NOTA: instrucción de compilación "gcc -g programa4.c"
// Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo 
// (El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)
#include<stdio.h>

int main()
{
    // Definimos las variables que utilizaremos
    int lado, perimetro;
    // Pedimos por pantallla el valor del lado del Cuadrado
    printf("Ingrese el valor del lado del cuadrado:");
    scanf("%i",&lado);
    // Realizamos la operación del calculo del perímetro
    perimetro = lado * 4;
    // Mostramos por pantalla los resultados de la operación.
    printf("El perímetro del cuadrado es:");
    printf("%i",perimetro);
    getchar();
    return 0;
}