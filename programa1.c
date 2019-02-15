// NOTA: instrucción de compilación "gcc -g programa1.c"
// El "include" permite importar librerías de funciones contenidos en otros archivos
#include<stdio.h>

// La función "main" es la primera que se ejecuta al iniciarse un programa en el lenguaje C
int main()
{
    // Definición de variables
    int horasTrabajadas;
    float costoHora;
    float sueldo;
    // Para mostrar mensajes en la pantalla utilizamos la función "printf"
    printf("Ingrese las horas trabajadas por el empleado:");
    // Para hacer la entrada de datos por teclado en C debemos utilizar la función "scanf"
    scanf("%i",&horasTrabajadas);
    printf("Ingrese el pago por hora:");
    scanf("%f",&costoHora);
    // Las operaciones que indicamos en el diagrama de flujo mediante la figura rectángulo la codificamos tal cual
    sueldo=horasTrabajadas*costoHora;
    printf("El sueldo total del operario es ");
    printf("%f",sueldo);
    // La función "getchar()" detiene la ejecución del programa hasta que se presiona una tecla
    getchar();
    // La instrucción "return 0" le avisa al sistema operativo que el programa finalizó correctamente
    return 0;
}