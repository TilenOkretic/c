#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const char *str=NULL;

int main(int argc, char const **argv){
    printf("%s\n", argv[1]);
    int w_len = strlen(argv[1]);
    bool pal = 0;

    str = argv[1];

    printf("dolzina je %i\n", w_len);

    for(int start = 0, end = w_len-1; start != w_len/2; start++ , end--){
        printf("%c %c %d\n", str[start], str[end], str[start] == str[end]);
        if((str[start] == str[end])){
            pal = 1;
            break;
        }
    }

    if(pal){
        printf("je palindrom");
    }else {
        printf("ni palnidrom");
    }
    return 0;
}