// declaracion de bibliotecas
#include <stdio.h>
#include <time.h>

// inicio
int main()
{
    // declaracion de variables de tiempo
    clock_t t_start, t_final;
    double segundos;
    // declaracion de cantidad de numeros que tendria el arreglo a ordenar
    int n[] = {2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000, 20000, 22000, 24000, 26000, 28000, 30000, 32000, 34000, 36000, 38000, 40000};

    // intentos que tendria el ordenamiento
    for (int k = 0; k < 20; k++)
    {
        // declaracion de variables
        int arreglo[n[k]];
        int i, j, key;
        // asignacion de valores para el mejor, osea que este ordenado
        for (i = 0; i < n[k]; i++)
            arreglo[i] = i;

        // inicia la medicion de tiempo
        t_start = clock();

        // inicia el  algoritmo de  ordenamiento
        for (i = 0; i < n[k] - 1; i++)
        {
            key = arreglo[i];
            j = i - 1;

            while (j >= 0 && arreglo[j] > key)
            {
                arreglo[j + 1] = arreglo[j];
                j = j - 1;
            }

            arreglo[j + 1] = key;
        }

        // termina el calculo de una variable
        t_final = clock();

        // se restan los tiempos, y se divide en segundos, se asigna a una variable double por los decimales de tiempo
        segundos = (double)(t_final - t_start) / CLOCKS_PER_SEC;

        // se muestra por pantalla el tiempo de rendimiento del algoritmo
        printf("%f\n", segundos);

        // ESTO ES DE PRUEBA PARA VER SI EL ORDENAMIENTO ESTABA FUNCIONANDO
        // for (i = 0; i < n; i++)
        //    printf("[%d]   ", arreglo[i]);
    }
}