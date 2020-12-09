#include <stdio.h>
#include <string.h>
#include <strings.h>

int main() {
    char ime[100];

    printf("Vnsei ime: ");
    scanf("%s", ime);
    printf("\n");
    for(int i=strlen(ime)-1;i>=0;i--){
        printf("%c", ime[i]);
    }

    printf("\n");
    printf("%lu", sizeof(ime));

}