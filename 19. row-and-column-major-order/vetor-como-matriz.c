#include <stdio.h>
#include <stdlib.h>
void main(){
    int n_rows = 5000, n_cols = 5000, n_elm = n_rows * n_cols;
    // AQUI TRANSFORMAMOS A MATRIZ EM UM BLOCO CONTÍNUO NA MEMÓRIA
    int *matriz = (int*)calloc(n_elm,sizeof(int));

    // PARA ACESSAR OS ELEMENTOS (JÁ QUE O matriz[i][j] NÃO FUNCIONA MAIS)
    // USAMOS O (i * n_cols) + j.

    for(int i = 0; i < 5000; i++){
        for(int j = 0; j < 5000; j++){
            int p = (i*n_cols)+j;
            matriz[p] = (i + j) % 2;
        }
    }
    printf("Alocado!!!");
}