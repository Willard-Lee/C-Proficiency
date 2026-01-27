#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb){
    // pa -> : 21
    // pb -> : 17
    int t = *pa;  // t: 21
    *pa = *pb;    // pa -> a : 17, pb -> b:17
    *pb = t;      // pa -> a : 17, pb -> b:21
}

int main(){
    int a = 21;
    int b = 17;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a , b);
    return EXIT_SUCCESS;
}