/* Codifique uma função para 
- Alocar uma matriz dinâmica 3d
- Imprimir seus elementos e endereços de memória
- Adicionar um escalar a matriz
- Desalocar a matriz atribuindo NULL ao ponteiro */

#include <stdio.h>
#include <stdlib.h>
int main(){
    int z = 2, x = 2, y = 2; 
    // base da matriz
    int ***m = (int***)malloc(z*sizeof(int **));

    for(int i = 0; i < x; i++){
        m[i] = (int **)malloc(x*sizeof(int *));
        for(int j = 0; j < y; j++){
            m[i][j] = (int *)malloc(y*sizeof(int));
        }
    }

    m[0][1][1] = 1;
    printf("%d",m[0][1][1]);

}