// NOTA: instrucción de compilación "gcc -g programa23.c"
// Se ingresan por teclado tres números, si al menos uno de
// los valores ingresados es menor a 10, imprimir en pantalla
// la leyenda "Alguno de los números es menor a diez". 
#include<stdio.h>

int main()
{
    // Definimos las variables
    int num1,num2,num3;
    // Mostramos un mensaje por pantalla
    printf("Ingrese el primer valor:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num1);
    // Mismos pasos para la entrada del segundo y tercer número
    printf("Ingrese el segundo valor:");
    scanf("%i",&num2);
    printf("Ingrese el tercer valor:");
    scanf("%i",&num3);
    // El primer bloque después del "if" representa la rama del verdadero
    if (num1<10 || num2<10 || num3<10)
    {
        // Mostramos por pantalla "Alguno de los números es menor a diez"
        printf("Alguno de los números es menor a diez");
    }
    getchar();
    return 0;
}