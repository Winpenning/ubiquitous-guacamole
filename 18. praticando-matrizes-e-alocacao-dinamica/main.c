#include <stdio.h>
#include <stdlib.h>

void main(){
    puts("### ALOCANDO MEMORIA ###");    
    int*** matriz = (int***) calloc(3,sizeof(int**));
    printf("&matriz = %p | matriz = %p",&matriz,&matriz[0]);
    int count = 1;
    // alocar a memória 
    for(int i = 0;i < 3; i++){
        matriz[i] = (int**)calloc(3,sizeof(int*));
        for(int j = 0; j < 3; j++){
            matriz[i][j] = (int*)calloc(3,sizeof(int));
            for(int k = 0; k < 3; k++){
                matriz[i][j][k] = count;
                count++;
            }
        }
    }
    for(int i = 0;i < 3; i++){
        printf("\n\n&matriz[%d] = %p | matriz[%d] = %p",i,&matriz[i],i,matriz[i]);
        for(int j = 0; j < 3; j++){
            printf("\n&matriz[%d][%d] = %p | matriz[%d][%d] = %p",i,j,&matriz[i][j],i,j,matriz[i][j]);
            for(int k = 0; k <3; k++){
                printf("\n&matriz[%d][%d][%d] = %p | matriz[%d][%d][%d] = %d",i,j,k,&matriz[i][j][k],i,j,k,matriz[i][j][k]);
            } 
        }
    }

    puts("\n### DESALOCANDO MEMORIA ###");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            free(matriz[i][j]);
        }
        free(matriz[i]);
    }
    free(matriz);
    puts("### MEMORIA DESALOCADA!!! ###");
    printf("matriz[0] = %p | matriz[0][0] = %p | matriz[0][0][0] = %d",matriz[0],matriz[0][0],matriz[0][0][0]);
}