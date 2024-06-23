#include <stdio.h>
#include <stdlib.h>
void incrementador(int vetor[],int n){
    for(int i = 0; i < n; i++ ){
        vetor[i] += n;
    }
}

void imprimir_vetor(const int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("\n&vetor[%d] = %p | vetor[%d] = %d ",i,&vetor[i],i,vetor[i]);
    }
}

void main(){
    int vetor_estatico[5] = {1,2,3,4,5,};
    imprimir_vetor(vetor_estatico,5);
    incrementador(vetor_estatico, 5);
    imprimir_vetor(vetor_estatico,5);

    puts("");
    int *vetor_dinamico = (int *) malloc(5*sizeof(int)); // alocado
    imprimir_vetor(vetor_dinamico,5);
    incrementador(vetor_dinamico,5);
    imprimir_vetor(vetor_dinamico,5);

}