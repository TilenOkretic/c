#include <stdio.h>
#include <string.h>

// struct je podobno ku class
struct students {
    char first_name[20];
    char last_name[20];
    char program[20];
    int std_id;
};


int main(){

    char sinput[20];
    struct students s1, s2;

    gets(s1.first_name);  // vnesemo ime

    printf("najboljsi student je %s", s1.first_name);


    puts("\nVnesi priimek:");
    scanf("%s", s1.last_name); //venesemo priimek
    printf("\n%s", s1.last_name);

    


    return 0;
}