/*
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void izpis(char* word);

int main() {

    char wd[14];

    printf("Vnsei besedo, ki ima manj kot 15 znakov:\n");
    scanf("%s", wd);

    printf("Dolzina vnosene besede je %i\n", strlen(wd));
    int sg = 0;
    int sm = 0;
    bool flag=false;

    for(int i =0;i < strlen(wd); i++){
        if(isalpha(wd[i])){
                if(wd[i] == 'a' || wd[i] == 'i' || wd[i] == 'e'  || wd[i] == 'o'  || wd[i] == 'u' ){
                    sg += 1;
                }else {
                    sm += 1;
                }
        }else {
            flag = true;
        }
    }
    printf("stevilo samoglasnikov je %i, stevilo sogalsnikov je %i", sg, sm);

    if(flag){
        printf("\nBeseda %s vsebuje stevila\n", wd);
        char *nw;
        for(int i =0;i < strlen(wd); i++){
            if(isalpha(wd[i])){
                nw[strlen(nw)] = wd[i];
            }
        }

        izpis(nw);
    }


    return 0;
}

void izpis(char* word){
    printf("\nNova beseda brez stevilk je: %s",word);
    printf("\nDolzina nove besede je %i", strlen(word));    
}