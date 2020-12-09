
/* 
    * arrays 
    and 
    * sizeof 
    functions */

#include<stdio.h>
#include<string.h>


int main(int argc,  char const *argv[]) {

    // Array
    int a[3] = { 5, 3, 1 };
    // Matrix
    int b[3][2] = { { 1, 2 },
                    { 3, 4 },
                    { 5, 6 } };

    for(int i=0; i< 3;i++){
        for(int j=0;j<2;j++){
            printf("%i ", b[i][j]);
        }
        printf("\n");
    }

    /*
        sizeof  vrze velikost v bytih
    */
    printf("velikost a %lu bytes\n", sizeof(a));
    printf("dejanska velikost matrike a je %lu\n", sizeof(a)/sizeof(a[0]));

    printf("\n");

    printf("velikost matrike b je %lu\n", sizeof(b));    
    printf("dejanska velikost matrike b je %lu\n", sizeof(b)/sizeof(b[0][0]));    

    char str_one[]="9gag normie shayt"; 
    char *str_two="neki druzga je tu je tu";

    /* Strings */

    printf("\n");
    printf("%s", str_one);
    printf("\n");
    printf("\n");
    printf("%s", str_two);
    
    printf("\n");

    printf("Velikost stringa '%s' je %i",str_one, sizeof(str_one));
    printf("Velikost stringa '%s' je %i",str_two, sizeof(str_two));

    ///////////////////////////////////////////////////////////////

    printf("\n")
    printf("\n")
    printf("\n")
    printf("\n")

    ///////////////////////////////////////////////////////////////

    
    return 0;
}