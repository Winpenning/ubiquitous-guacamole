#include <stdio.h> // standart input output header

void main(){

    int a = 1;

    printf("\nint: %ld bytes",sizeof(a));
    printf("\nunsigned long: %ld bytes", sizeof(unsigned long));
    printf("\nint pointer: %ld bytes", sizeof(int *));
    printf("\npointer to int pointer: %ld bytes", sizeof(int **));
    printf("\ndouble: %ld bytes", sizeof(double));
    printf("\nchar: %ld bytes", sizeof(char));
}
