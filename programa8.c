// NOTA: instrucción de compilación "gcc -g programa8.c"
#include<stdio.h>

int main()
{
    // Definimos las variables
    float sueldo;
    // Mostramos un mensaje por pantalla
    printf("Ingrese el sueldo:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%f",&sueldo);
    // La palabra clave "if" indica que estamos en presencia de una estructura condicional
    if (sueldo>3000)
    {
        printf("Esta persona debe abonar impuestos");
    }
    getchar();
    return 0;
}