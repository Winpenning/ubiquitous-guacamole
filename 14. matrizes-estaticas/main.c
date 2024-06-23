#include <stdio.h>
#include <stdlib.h>

void main(){
    int matriz[2][3]= {{1,3,5},{-7,2,8}}; // matriz com 2 linhas e 3 colunas
    // qtd de elementos = numero de linhas X numero de colunas
    // na matriz estatica  &matriz == m == m[0][0]

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("\n&Matriz[%d][%d] = %p",i,j,&matriz[i][j]);
            printf("\nMatriz[%d][%d] = %d",i,j,matriz[i][j]);
        }
    }


}