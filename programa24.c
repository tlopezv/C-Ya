// NOTA: instrucción de compilación "gcc -g programa24.c"
// Escribir un programa que pida ingresar la coordenada de un
// punto en el plano, es decir dos valores enteros x e y (distintos a cero).
// Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. 
// (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.) 
#include<stdio.h>

int main()
{
    // Definimos las variables
    int x,y;
    // Mostramos un mensaje por pantalla
    printf("Ingrese el valor de la coordenada del eje de abcisas o de las equis(X):");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&x);
    // Mismos pasos para la entrada del valor del eje y
    printf("Ingrese el valor de la coordenada del eje de ordenadas o de las yes(Y):");
    scanf("%i",&y);
    // El primer bloque después del "if" representa la rama del verdadero
    if (x > 0 && y > 0)
    {
        // Mostramos que el punto está en el primer cuadrante del plano
        printf("Punto en el 1º Cuadrante del plano");
    }
    else // El segundo bloque de llaves corresponde con la rama del falso
    {
        if ( x < 0 && y > 0)
        {
            // Mostramos que el punto está en el segundo cuadrante del plano
            printf("Punto en el 2º Cuadrante del plano");
        }
        else
        {
            if (x < 0 && y < 0)
            {
                // Mostramos que el punto está en el tercer cuadrante del plano
                printf("Punto en el 3º Cuadrante del plano");
            }
            else
            {
                // Mostramos que el punto está en el cuarto cuadrante del plano
                printf("Punto en el 4º Cuadrante del plano");
            }
        }
    }
    getchar();
    return 0;
}