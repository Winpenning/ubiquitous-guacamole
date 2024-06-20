#include <stdio.h>

void swap(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

void main(){
    int a = 1; 
    int b = 0;
    swap(&a,&b);
    printf("%d | %d", a,b);
}