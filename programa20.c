// NOTA: instrucción de compilación "gcc -g programa20.c"
// Realizar un programa que pida cargar una fecha cualquiera,
// luego verificar si dicha fecha corresponde a Navidad. 
#include<stdio.h>

int main()
{
    // Definimos las variables
    int dd,mm,aa;
    // Mostramos un mensaje por pantalla
    printf("Ingrese nro de dia:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&dd);
    // Mismos pasos para la entrada del numero del mes y el año
    printf("Ingrese nro de mes:");
    scanf("%i",&mm);
    printf("INgrese nro de año:");
    scanf("%i",&aa);
    // El primer bloque después del "if" representa la rama del verdadero
    if (dd==25 || mm==12)
    {
        // Mostramos que la fecha corresponde a Navidad
        printf("La fecha corresponde a Navidad");
    }
    else // El segundo bloque de llaves corresponde con la rama del falso
    {
        // Mostramos que la fecha NO corresponde a Navidad
        printf("Esta fecha NO corresponde a Navidad");
    }
    getchar();
    return 0;
}