// Nama File : main.c
// Nama Pembuat : Sulthan Firmansyah
// NIM : 24060121140108
// Lab : B1

// Soal
/*Diketahui sebuah tabel berisi harga integer [1...N], yg telah diisi.
Tuliskan algoritma sekuensial kemudian implementasikan dalam bahasa c. jika diberikan nilai X yang merupakan bilangan integer.
Algoritmanya mencari apakah X ada di dalam tabel array atau tidak. Kemudian cek apakah X merupakan bialangan positif atau tidak.*/

// Deskripsi : mencari nilai X dalam tabel T [1...N] secara sekuensial mulai dari T1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SEQSearchX1.h"

// Program utama

int main()
{
    // Kamus
    int A[] = {1,3,5,-8,12,90,3,50};
    int N = sizeof(A)/ sizeof(A[0]);
    int X = 12;
    int K;

    // Algoritma
    printf("Mencari harga X dalam tabel T (tanpa boolean) \n");

    SEQSearchX1(A, N, &K, X);
    if(K != -1){
        printf("X ditemukan di index ke- %d\n", K);
        if(X < 0){
            printf("X merupakan bilangan negatif \n");
        }
        else{
            printf("X merupakan bilangan positif \n");
        }
    }
    else{
        printf("X tidak ditemukan \n");

    }
    return 0;
}
