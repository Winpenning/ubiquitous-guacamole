#include <stdio.h>

void main(){

    // int *p1 -> ESSA VARIÁVEL APONTA PARA UM ENDEREÇO DE UM INTEIRO.
    // int **p1 -> ESSA VARIÁVEL APONTA PARA UM ENDEREÇO DE UMA VARIÁVEL
    //             QUE APONTA PARA UM ENDEREÇO DE UM INTEIRO.

    int a,b;
    int *p1 = &a, *q1 = &b;
    int **p2 = &p1,**q2 = &q1;
    int ***p3 = NULL, ***q3 = NULL;
    
    printf("\nDefina o valor A: ");
    scanf("%d",&a);
    printf("\nDefina o valor B: ");
    scanf("%d",&b);
 
    p3 = &p2;
    q3 = &q2;
    
    printf("\na: %d | &a: %p", a,&a);
    printf("\np1: %p | &p1: %p", p1,&p1);
    printf("\np2: %p | &p2: %p", p2,&p2);
    printf("\nq1: %p | &q1: %p", q1,&q1);
    printf("\nq2: %p | &q2: %p", q2,&q2);   
    printf("\np3: %p | &p3: %p",p3,&p3); // p3 -> p2 -> p1 -> a
    printf("\nq3: %p | &q3: %p",q3,&q3); // q3 -> q2 -> q1 -> b
    
    q3 = &p2; // q3 -> p2 -> p1 -> a
    printf("\n\nq3 passa a apontar para &p2! (%p)\n",q3);
    
    int x = 0;
    printf("\nDefina um novo valor para A: ");
    scanf("%d",&x);
    ***p3 = x;
    printf("\nValor de a: %d",a);

    p1 = &b;
    printf("\n\np1 passa a apontar para &b!\n");

    printf("\nDefina um novo valor para B: ");
    scanf("%d",&x);
    ***q3 = x;

    int sum = a + ***q3;

    printf("Soma de A + B: %d",sum);
}