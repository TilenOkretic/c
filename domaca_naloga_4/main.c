#include <stdio.h>
#include <string.h>

struct film {
    char path_do_datoteke_filma[50];
    char path_do_podnapisov[50];
    char path_do_torrent_datoteke[50];
    float dolzina_filma;
};

void print_film_attrib(struct film *elm){
    puts("Path do datoteke filma:");
    puts(elm->path_do_datoteke_filma);
    puts("Path do podnapisov filma:");
    puts(elm->path_do_podnapisov);
    puts("Path do torrent-a filma:");
    puts(elm->path_do_torrent_datoteke);
    puts("Dolzina filma je:");
    char str[50];
    sprintf(str, "%f", elm->dolzina_filma); // convert float to string
    puts(str);
}


int main()
{
    struct film zbirka[100];
    
    int film_st;

    puts("Vnesi koliko filmov imas:");
    scanf("%i", &film_st);
    getchar();
    
    for(int i=0;i<film_st;i++)
    {
        puts("Vnesi path do datoteke filma:");
        gets(zbirka[i].path_do_datoteke_filma);
        puts("Vnesi path do podnapisov filma:");
        gets(zbirka[i].path_do_podnapisov);
        puts("Vnesi path do torrent-a filma:");
        gets(zbirka[i].path_do_torrent_datoteke);
        puts("Vnesi dolzino filma:");
        scanf("%f", zbirka[i].dolzina_filma);
        getchar();
    }
    puts("Kateri film bi rad preveril? Vnesi stevilko (prvi film ima stevilko 0, naslednji 1, itd)?");
    int film_id;
    scanf("%i", &film_id);+
    puts("Vnesen film ima atribute");
    print_film_attrib(&zbirka[film_id]);
    return 0;
}