#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Ingresar N sueldos e indicar su suma y su promedio
    ///imprimir resultados

    float sueldo, promedio, suma = 0;
    int cantidadSueldo, retener;


    printf("\n Ingrese la cantidad de sueldos\n");
    scanf("%d", &cantidadSueldo);

    retener = cantidadSueldo;

    while ( cantidadSueldo != 0 )
    {
        printf("\n Numero de sueldo es -> [%d] \n Ingrese su sueldo \n", cantidadSueldo );
        scanf("%f", &sueldo);

        suma = suma + sueldo;

        cantidadSueldo = cantidadSueldo - 1;
    }

    promedio = 21 / retener;

    printf("\n El promedio de los sueldos es %.2f",promedio);
    printf("\n La suma de los sueldos es %.2f", suma);


    return 0;
}
