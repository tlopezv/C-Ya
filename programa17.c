// NOTA: instrucción de compilación "gcc -g programa17.c"
// Un postulante a un empleo, realiza un test de capacitación, 
// se obtuvo la siguiente información: cantidad total de preguntas 
// que se le realizaron y la cantidad de preguntas que contestó correctamente. 
// Se pide confeccionar un programa que ingrese los dos datos por teclado e informe 
// el nivel del mismo según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:

//	Nivel máximo:	Porcentaje>=90%.
//	Nivel medio:	Porcentaje>=75% y <90%.
//	Nivel regular:	Porcentaje>=50% y <75%.
//	Fuera de nivel:	Porcentaje<50%.

#include<stdio.h>

int main()
{
    // Definimos las variables
    int numPreg, numOk, porcentaje;
    // Mostramos un mensaje por pantalla
    printf("Cantidad total de preguntas que se le realizaron:");
    // Para la entrada de datos por teclado utilizamos la función "scanf"
    scanf("%i",&numPreg);
    // Mismos pasos para la entrada de la cantidad de preguntas que contestó correctamente
    printf("Cantidad de preguntas que contesto correctamente");
    scanf("%i",&numOk);
    // Una operación debe tener el operador de asignación "="
    porcentaje = (numOk*100)/numPreg;
    // El primer bloque después del "if" representa la rama del verdadero
    if (porcentaje >= 90)
    {
        // Mostramos el mensaje Nivel máximo
        printf("Nivel máximo: Porcentaje %i",porcentaje);
    }
    else // El segundo bloque de llaves representa la rama del falso
    {
        if (porcentaje >= 75)
        {
            // Mostramos el mensaje Nivel medio
            printf("Nivel medio: Porcentaje %i",porcentaje);
        }
        else
        {
            if (porcentaje >= 50)
            {
                // Mostramos el mensaje Nivel regular
                printf("Nivel regular: Porcentaje %i",porcentaje);
            }
            else
            {
                // Mostramos el mensaje Fuera de nivel
                printf("Fuera de nivel: Porcentaje %i",porcentaje);
            }
            
            
        }
        
    }
    getchar();
    return 0;
}