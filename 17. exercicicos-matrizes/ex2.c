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

    for(int i = 0; i < z; i++){
        m[i] = (int **)malloc(x*sizeof(int *));
        for(int j = 0; j < x; j++){
            m[i][j] = (int *)malloc(y*sizeof(int));
        }
    }
    int count = 12;
    for(int i = 0; i < z; i++){
        printf("\n\n&m[%d] = %p | m[%d] = %p\n",i,&m[i],i,m[i]);
        for(int j = 0; j < x; j++){
            printf("\n&m[%d][%d] = %p | m[%d][%d] = %p",i,j,&m[i][j],i,j,m[i][j]);
            for(int k = 0; k < y; k++){
                m[i][j][k] = count;
                count++;
                printf("\n&m[%d][%d][%d] = %p | m[%d][%d][%d] = %d",i,j,k,&m[i][j][k],i,j,k,m[i][j][k]);
            }
        }
    }

}