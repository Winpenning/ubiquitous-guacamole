#include <stdio.h>

void soma(int x, int y, int *z){// com a passagem por referência, se pode alterar um endereço de memória de uma variável externa.
    printf("\nx: %p | y: %p | z: %p ",&x,&y,z);
    *z = x + y; // altera o conteúdo do endereço de memória que z aponta
    z = &y; // altera o endereço de memória que z aponta
    printf("\nz: %p",z);
}

void main(){
    int a = 10, b = 20, c;


    printf("\na: %p | b: %p | c: %p ",&a,&b,&c);
    soma(a,b,&c);
    printf("\nvalor de c: %d", c);

}