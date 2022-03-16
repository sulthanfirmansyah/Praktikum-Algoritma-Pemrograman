/*Nama File : HargaDiskon.c
Deskripsi : menghitung besarnya harga setelah diberikan diskon
Nama : Sulthan Firmansyah
NIM : 24060121140108*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int l, g, Tf;

    //Algoritma
    printf("Program Tarif PLN \n");
    printf("Daya Listrik yang Dipakai : ");
    scanf("%d", &l);
    printf("Golongan Tarif : ");
    scanf("%d", &g);

    if(l < 100) {
        Tf = g * 1000 * 100;
        printf("Tarif PLN yang harus dibayar sebesar : %d", &Tf);
    }
    else if ( l >= 1000 ) {
        Tf = (g * 1000 * l) * 1.1;
        printf("Tarif PLN yang harus dibayar sebesar : %d", &Tf);
    }
    else {
        Tf = g * 1000 * l;
        printf("Tarif PLN yang harus dibayar sebesar : %d", &Tf);
    }
    return 0;
}
