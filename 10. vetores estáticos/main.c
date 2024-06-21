#include <stdio.h>

void main(){
    
    // &v = v = &v[0]
    int v[10] = {5,2,5,7,3,89,65,4,76,3};

    for(int i = 0; i < 10; i++){
        printf("\n&v[%d] = %p | v[%d] = %d ",i,(v+i),i,*(v+i));
    }
}