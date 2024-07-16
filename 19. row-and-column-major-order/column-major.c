#include <stdio.h>
#include <stdlib.h>

void main(){
    puts("### ALOCANDO MEMORIA ###");    
    int** matriz = (int**) calloc(3000,sizeof(int*));
    printf("&matriz = %p | matriz = %p",&matriz,&matriz[0]);
    int count = 1;
    // alocar a memória 
    for(int i = 0;i < 3000; i++){
        matriz[i] = (int*)calloc(90000,sizeof(int));
    }

    for(int j = 0; j < 90000; j++){
        for(int i = 0; i < 3000; i++){
        matriz[i][j] = (i+j)%2;
        }
    }
    puts("\n### MATRIZ PERCORRIDA VIA COLUMN MAJOR");
}