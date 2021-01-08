#include <stdio.h>
#include <stdlib.h>


float fsum(float *arr[]){
    float sum = 0;
    int size = sizeof(&*arr) / sizeof(&*arr[0]);
    for(int i = 0; i < size; i++){
        sum=sum+arr[i];
    }

    return sum;
}

int main(int argc, char const * argv[]){

    printf("St argumentov je %i",argc);
    float sum = 0;
    float arr[argc];
    for(int i = 1; i < argc;i++){
        sum = sum + atof(argv[i]); // atoi za pretvorbo str v int
                                   // atof za pretvorbo str v float

        arr[i-1] = atof(argv[i]);
    }

    float size = sizeof(arr) / sizeof(arr[0]);

    // printf("\n%f", size);

    printf("\n Vsota je: %f", sum);

    float f_sum = fsum(arr);

    printf("\n Vsota z pomocjo arreja je: %f", f_sum);

    return 0;
}