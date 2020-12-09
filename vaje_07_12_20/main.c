#include <stdio.h>



int main() {
    int a = 5;
    int matrix[2][3] = {{1,2,3},{4,5,6}};
    int new_matrix[3][2] = {{1,4},{2,5},{3,6}};
    /* Transpose matrix */

    for(int i=0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            new_matrix[i][j]=
        }
    }
    

    return 0;
}

void swap(int *a, int *b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;        
}