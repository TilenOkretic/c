#include <stdio.h>

/* Z * nakazemo, da vracamo pointer */
int *fun() {
    static int a[2]={2,0};
    return a;
}

int main(){
    int *a;
    a = fun();
    printf("pointer od a je %p, clela matrika je %i %i", a, a[0], a[1]);
    return 0;
}

