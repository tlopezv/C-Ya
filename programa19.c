// NOTA: instrucción de compilación "gcc -g programa19.c"
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
    if (mm==1 || mm==2 || mm==3)
    {
        // Mostramos que la fecha corresponde al primer trimestre
        printf("Corresponde al primer trimestre");
    }
    getchar();
    return 0;
}