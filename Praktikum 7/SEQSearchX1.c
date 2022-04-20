// Nama File : SEQSearchX1.c
// Nama Pembuat : Sulthan Firmansyah
// NIM : 24060121140108
// Lab : B1

//soal
/*Diketahui sebuah tabel berisi harga integer [1...N], yg telah diisi.
Tuliskan algoritma sekuensial kemudian implementasikan dalam bahasa c. jika diberikan nilai X yang merupakan bilangan integer.
Algoritmanya mencari apakah X ada di dalam tabel array atau tidak. Kemudian cek apakah X merupakan bialangan positif atau tidak.*/

// Deskripsi : mencari nilai X dalam tabel T [1...N] secara sekuensial mulai dari T1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "SEQSearchX1.h"

void SEQSerachX1(int T[], int N, int *K, int X)
{
    //Kamus
    int i;

    //Algoritma
    i = 0;
    while(i < N-1 && T[i] != X){
        printf("%d\n", i);
        i++;
    }
    if(T[i] == X){
        *K = i;
    }
    else{
        *K = 0;
    }
}
