/*Nama File : HargaDiskon.c
Deskripsi : menghitung besarnya harga setelah diberikan diskon
Nama : Sulthan Firmansyah
NIM : 24060121140108*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int j,g,Up;

    //Algoritma
    printf("Program Upah Kerja \n");
    printf("Jam kerja perminggu : ");
    scanf("%d", &j);
    printf("Golongan : ");
    scanf("%d", &g);

    if (j < 40) {
        Up = j * (1000 + (j-2) * 500);
        printf("Upah Kerja Sebesar : %d", Up);
    }
    else {
        Up = j * (1000 + (j-2) * 500) * 40 + ((j-40)*(1000 + (g-1) * 500));
        printf("Upah Kerja Sebesar : %d", Up);
    }
    return 0;
}
