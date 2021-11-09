#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    
    int linhas = 5;
    int colunas = 10;
    int** matriz;

    matriz = malloc(sizeof(int*) * linhas);
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = malloc(sizeof(int) * (colunas+1));
        
    }
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;


    printf("%d %d %d", linhas, colunas, (*matriz)[0]);
    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }

    free(matriz);

}
    




