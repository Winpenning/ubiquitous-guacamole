#include <stdio.h>
#include <stdlib.h>

void main(){

    puts("####### VETOR ALOCADO ESTATICAMENTE #######");
    int array[5] = {0,10,22,33,44};
    printf("&array = %p | array = %p",&array,array);
    // com isso vemos que o início do vetor fica na stack no endereço do primeiro elemento.
    for(int i = 0; i < 5; i++){
        printf("\n&array[%d] = %p | array[%d] = %d",i,&array[i],i,array[i]);
    }
    puts("\n");

    puts("####### VETOR ALOCADO DINAMICAMENTE (malloc) #######");

    int *array_malloc = (int*)malloc(5*sizeof(int));

    printf("&array_malloc = %p | array_malloc = %p (aqui ja estamos na posicao do primeiro elemento na heap)",&array_malloc,array_malloc);

    for(int i = 0; i < sizeof(array_malloc) + 1; i++ ){
        printf("\n &array_malloc[%d] = %p | array_malloc[%d] = %d", i, &array_malloc[i], i,array_malloc[i]);
    }

    puts("\n");

    puts("####### VETOR ALOCADO DINAMICAMENTE (calloc) #######");
    int *array_calloc = (int*)calloc(5,sizeof(int));

    printf("&array_calloc = %p | array_calloc = %p (aqui ja estamos na posicao do primeiro elemento na heap)",&array_calloc,array_calloc);

    for(int i = 0; i < sizeof(array_calloc) + 1; i++ ){
        printf("\n &array_calloc[%d] = %p | array_calloc[%d] = %d", i, &array_calloc[i], i,array_calloc[i]);
    }
}