/*Nama File : HargaDiskon.c
Deskripsi : menghitung besarnya harga setelah diberikan diskon
Nama : Sulthan Firmansyah
NIM : 24060121140108*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    float a,g,T;

    //Algoritma
    printf("Program Tunjangan Anak \n");
    printf("Jumlah Anak : ");
    scanf("%f", &a);
    printf("Gaji Pokok : ");
    scanf("%f", &g);

    if (a>=3) {
        T = 3 * (0.1 * g);
        printf("Tunjangan Anak : %.2f", T);
    }
    else {
        T = a * (0.1 * g);
        printf("Tunjangan Anak : %.2f", T);
    }
    return 0;
}
