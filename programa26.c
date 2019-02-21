// NOTA: instrucción de compilación "gcc -g programa26.c"
// Escribir un programa en el cual: dada una lista de tres
// valores numéricos distintos se calcule e informe su rango
// de variación (debe mostrar el mayor y el menor de ellos)
#include<stdio.h>

int main()
{
    // Definimos las variables
    int num1,num2,num3,mayor,menor;
    // Mostramos un mensaje por pantalla
    printf("Ingrese el primer número de la lista:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&num1);
    // Mismos pasos para la entrada de el segundo y tercer número de la lista
    printf("Ingrese el segundo número de la lista:");
    scanf("%i",&num2);
    printf("Ingrese el tercer número de la lista:");
    scanf("%i",&num3);
    // El primer bloque después del "if" representa la rama del verdadero
    if (num1 > num2 && num1 > num3)
    {
        // Una operación debe tener el operador de asignación "="
        mayor = num1;
        if (num2 < num3)
        {
            menor = num2;
        }
        else
        {
            menor = num3;
        }
    }
    else // El segundo bloque de llaves corresponde con la rama del falso
    {
        if (num2 > num1 && num2 > num3)
        {
            mayor = num2;
            if (num1 < num3)
            {
                menor = num1;
            }
            else
            {
                menor = num3;
            }
            
        }
        else
        {
            mayor = num3;
            if (num1 < num2)
            {
                menor = num1;
            }
            else
            {
                menor = num2;
            }
            
        }
        
    }
    // Mostramos el rango de variación de la lista por pantalla
    printf("El rango de variación de la lista es: (debe mostrar el mayor %i y el menor %i de ellos)",mayor,menor);
    getchar();
    return 0;
}