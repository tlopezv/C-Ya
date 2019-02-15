// NOTA: instrucción de compilación "gcc -g programa2.c"
#include<stdio.h>

int main()
{
    int lado;
    int superficie;
    printf("Ingrese el valor del lado del cuadrado:");
    scanf("%i",&lado);
    superficie = lado * lado;
    printf("La superficie del cuadrado es:");
    printf("%i",superficie);
    getchar();
    return 0;
}