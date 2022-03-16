/*Nama File : BiayaParkir.c
Deskripsi : Menghitung biaya parkir berdasarkan lamanya parkir
Nama : Sulthan Firmansyah
NIM : 24060121140108*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int p,b;

    //algoritma
    printf("Biaya Parkir\n");
    printf("Parkir berapa jam : ");
    scanf("%d", &p);

    if (p>2) {
        b = 2000 + ((p-2)*500);
        printf("Biaya parkir sebesar : %d", b);
    }
    else {
        b = 2000;
        printf("Biaya Parkir sebesar : %d", b);
    }
    return 0;
}
