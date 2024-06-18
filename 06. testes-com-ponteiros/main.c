#include <stdio.h>

int main(){
    
    double value = 1.155;

    double *pointer = &value;

    printf("*&value: %d", *&value); // *&value = *(endereço de value) = 1.155
    printf("*pointer: %d", *pointer);// *pointer = *(endereço de value) = 1.155
    printf("**&pointer: %d", **&pointer);
    // **&pointer = **(endereco de pointer) = *(endereço de value) = 1.155
    return -1;
}