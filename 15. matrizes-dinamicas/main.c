#include <stdio.h>
#include <stdlib.h>

void main(){
    int ** matriz = NULL;

    matriz = (int **) calloc(3,sizeof (int*));

    for (int i = 0; i < 3 ; ++i) {
        matriz[i] = (int*) calloc(3,sizeof (int));
    }
    for(int i = 0; i < 3; i++){
        printf("\n## Inicio do bloco de memoria ##");
        for(int j = 0; j < 3; j++){
            matriz[i][j] = i*2*j;
            printf("\n&matriz[%d][%d] = %p", i,j,&matriz[i][j]);
            printf(" | matriz[%d][%d] = %d", i,j,matriz[i][j]);
        }
    }






}