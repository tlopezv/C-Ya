// NOTA: instrucción de compilación "gcc -g programa11.c"
// Se ingresan tres notas de un alumno, si el promedio es mayor o 
// igual a siete mostrar un mensaje "Promocionado".
#include<stdio.h>

int main()
{
    // Definimos las variables
    int nota1, nota2, nota3, promedio;
    // Mostramos un mensaje por pantalla
    printf("Ingrese la primera nota:");
    // Para la entrada de datos por teclado utilizamos la función "sanf"
    scanf("%i",&nota1);
    // Mismos pasos para la carga de la segunda y tercera nota
    printf("Ingrese la segunda nota:");
    scanf("%i",&nota2);
    printf("Ingrese la tercera nota:");
    scanf("%i",&nota3);
    // Una operación debe tener el operador de asignación "="
    promedio = (nota1 + nota2 + nota3) / 3;
    // La palabra clave "if" indica que estamos en presencia de una estructura condicional
    if (promedio>=7)
    {
        // Mostramos el mensaje "Promocionado"
        printf("Promocionado");
    }
    getchar();
    return 0;
}