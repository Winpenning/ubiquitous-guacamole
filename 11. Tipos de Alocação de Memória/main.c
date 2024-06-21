#include <stdio.h>
#include <stdlib.h>
void main(){
    
    int *pointer =(int*)malloc(5*sizeof(int));
    //Alocamos aqui, 20 bytes de memória na heap.

    printf("%p",pointer);
    //Posição do início do bloco de memória alocado na heap
}