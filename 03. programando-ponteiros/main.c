#include <stdio.h>
#include <stdlib.h>
void main(){
    int variable = 10;

    int *pointerOne = NULL;

    printf("\n variable: %d | &variable: %p",variable,&variable); 
    printf("\n pointerOne: %p | &pointerOne: %p",pointerOne,&pointerOne); 

    pointerOne = &variable; // ok, pointerOne recebe o endereço de variable
    printf("\n pointerOne: %p | &pointerOne: %p",pointerOne,&pointerOne); 
    
    int *pointerTwo = pointerOne; // ok, pointerTwo recebe o endereço que pointerOne armazena
    printf("\n pointerTwo: %p | &pointerTwo: %p",pointerTwo,&pointerTwo);

    *pointerTwo = 5; //ok, alterando o valor que está contido no endereço que pointerTwo aponta
    printf("\n variable: %d | &variable: %p",variable,&variable); 

    //*pointerTwo = &pointerOne; // ERRO pois estou tentando passar o endereço de pointeiro de inteiro, sendo que pointerTwo recebe endereço de inteiro
}