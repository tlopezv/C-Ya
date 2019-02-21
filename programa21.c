// NOTA: instrucción de compilación "gcc -g programa21.c"
// Se ingresan tres valores por teclado, si todos son iguales
// se imprime la suma del primero con el segundo y a este resultado
// se lo multiplica por el tercero.
#include<stdio.h>

int main()
{
    // Definimos las variables
    int num1,num2,num3,operacion;
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
    if (num1 == num2 && num2 == num3){
        // Una operación debe tener el operador de asignación "="
        operacion = (num1 + num2) * num3;
        // Mostramos el resultado de la operación por pantalla
        printf("Los 3 número son iguales: la suma del primero con el segundo y a este por el tercero es: %i",operacion);
    }
    getchar();
    return 0;
}