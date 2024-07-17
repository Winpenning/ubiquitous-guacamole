#include <stdio.h>
#include <stdlib.h>

void main(){
    int** matrix = (int**)calloc(230,sizeof(int*));
    for(int i = 0 ; i < 3 ; i++){
        matrix[i] = (int*)calloc(4000,sizeof(int));
    }

        for(int j = 0 ; j < 4000 ; j++){
    for(int i = 0 ; i < 230 ; i++){
        printf("\n      &matrix[%d] = %p",i,&matrix[i]);
            printf("\n&matrix[%d][%d] = %p",i,j,&matrix[i][j]);
        }
    }
    printf("\nFinalizando o Programa!");
}