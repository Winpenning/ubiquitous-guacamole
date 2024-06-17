#include <stdio.h>

int main(){

    int a = 10;
    
    int *p1 = &a; // p1 = 31i
    int *p2 = NULL;

    printf("variavel a: %d | endereco de a: %p",a,&a);
    
    printf("\nponteiro p1: %p | endereco de p1: %p",p1, &p1);
    
    printf("\nponteiro p2: %p | endereco de p2: %p",p2,&p2);

    p2 = p1;
    
    printf("\nponteiro p2: %p | endereco de p2: %p",p2,&p2);
    
    *p2 = 1;

    printf("\nvariavel a: %d | endereco de a: %p",a,&a);

    return 0;
}