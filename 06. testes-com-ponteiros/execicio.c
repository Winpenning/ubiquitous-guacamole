#include <stdio.h>

void main(){
    int a,b,*p1,*p2;

    a = 4, b = 3;
    p1 = &a, p2 = p1;

    *p2 = *p1 + 3;
    b = b * (*p1);
    (*p2)++;
    p1 = &b;

    // *p1 -> 21 | *p2 -> 8
    printf("%d %d\n",*p1,*p2);
    // a -> 8 | b -> 21
    printf("%d %d\n", a,b);
}