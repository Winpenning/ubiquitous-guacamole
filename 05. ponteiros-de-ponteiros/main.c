#include <stdio.h>

void main(){

    // int *p1 -> ESSA VARIÁVEL APONTA PARA UM ENDEREÇO DE UM INTEIRO.
    // int **p1 -> ESSA VARIÁVEL APONTA PARA UM ENDEREÇO DE UMA VARIÁVEL
    //             QUE APONTA PARA UM ENDEREÇO DE UM INTEIRO.

    int a = 10;
    int *p1 = &a;
    int **p2 = NULL;

    p2 = &p1; // p2 armazena o endereço de p1
    **p2 = 11; // p2 altera o valor que está
    // armazenado no endereço de memória que o ponteiro p1 aponta.

    printf("valor de a: %d", a);
}