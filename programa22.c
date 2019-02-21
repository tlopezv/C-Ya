// NOTA: instrucción de compilación "gcc -g programa22.c"
// Se ingresan por teclado tres números, si todos los valores
// ingresados son menores a 10, imprimir en pantalla la leyenda
// "Todos los números son menores a diez". 
#include<stdio.h>

int main()
{
    // Definimos las variables
    int num1,num2,num3;
    // Mostramos un mensaje por pantalla
    printf("Ingrese el primer valor:");
    // Para la entrada dee datos por teclado utilizamos la función "scanf"
    scanf("%i",&num1);
    // Mismos pasos para la entrada del segundo y tercer número
    printf("Ingrese el segundo valor:");
    scanf("%i",&num2);
    printf("Ingrese el tercer valor:");
    scanf("%i",&num3);
    // El primer bloque después del "if" representa la rama del verdadero
    if (num1<10 && num2<10 && num3<10)
    {
        // Mostramos por pantalla "Todos los números son menores a diez"
        printf("Todos los números son menores a diez");
    }
    getchar();
    return 0;
}