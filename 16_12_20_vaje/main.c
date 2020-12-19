#include <stdio.h>

void izpis(int row, int col, int matrix[row][col]);

int main() {

    int m[2][3]={{1,2,3},{4,5,6}};

    printf("Velikost matrike %i\nStevilo elementov %i\nStevilo vrstic %i\nStevilo Stolpcev %i", sizeof(m),sizeof(m) / sizeof(m[0][0]), sizeof(m)/sizeof(m[0]), sizeof(m[0])/sizeof(m[0][0]));

    int m2[3][2]={1,2,3,4,5,6}; // Alternativni nacin zapisa matrike

    printf("\n\n");

    printf("Velikost matrike %i\nStevilo elementov %i\nStevilo vrstic %i\nStevilo Stolpcev %i", sizeof(m2),sizeof(m2) / sizeof(m2[0][0]), sizeof(m2)/sizeof(m2[0]), sizeof(m2[0])/sizeof(m2[0][0]));

    printf("\n\n");

    /* Univerzalna for zanka */

    for(int i =0; i < sizeof(m)/sizeof(m[0]);i++){
        for(int j =0; j < sizeof(m[0]) / sizeof(m[0][0]);j++){
            printf("%i ", m[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(int i =0; i < sizeof(m2)/sizeof(m2[0]);i++){
        for(int j =0; j < sizeof(m2[0]) / sizeof(m2[0][0]);j++){
            printf("%i ", m2[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    izpis(2,3, m);

    return 0;
}

void izpis(int row, int col, int matrix[row][col]){
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
}