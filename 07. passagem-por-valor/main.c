#include <stdio.h>
int soma(int x, int y){ // recebe as copias, agora x e y nao tem relacao com a e b
    int z = x + y;
    printf("\n%p | %p", &x, &y);
    return z; // devolve o valor no endereco de z
}

int main(){
    int a = 10; // coloca 10 no endereco de a
    int b = 20;// coloca 20 no endereco de b
    printf("\n%p | %p", &a, &b);
    int c = soma(a,b); //copia o valor de a e b para soma e recebe uma copia do retorno
    return 0;
}