// NOTA: instrucción de compilación "gcc -g programa25.c"
// De un operario se conoce su sueldo y los años de antigüedad.
// Se pide confeccionar un programa que lea los datos de entrada e informe:
// a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años,
// otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
// b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle
// un aumento de 5 %.
// c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
#include<stdio.h>

int main()
{
    // Definimos las variables
    float sueldo, pagar;
    int antiguedad;
    // Mostramos un mensaje por pantalla
    printf("Ingrese el sueldo:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%f",&sueldo);
    // Mismos pasos para la entrada de los años de antiguedad
    printf("Ingrese los años de antigüedad:");
    scanf("%i",&antiguedad);
    // El primer bloque después del "if" representa la rama del verdadero
    if (sueldo < 500 && antiguedad >=10)
    {
        // Una operación debe tener el operador de asignación "="
        pagar = sueldo * 1.2;
        // Mostrar que se le otorga un aumento del 20% y mostrar el sueldo
        printf("Otorgado un aumento del 20\%, su sueldo será: %f",pagar);
    }
    else // El segundo bloque de llaves corresponde con la rama del falso
    {
        if (sueldo < 500 && antiguedad < 10)
        {
            pagar = sueldo * 1.05;
            // Mostrar que se le otorga un aumento del 5% y mostrar el sueldo
            printf("Otorgado un aumento del 5\%, su sueldo será: %f",pagar);
        }
        else
        {
            // Mostrar que no se modifica el sueldo
            printf("Su sueldo es: %f",sueldo);
        }
    }
    getchar();
    return 0;
}