// Nama File : NBArray.c
// Deskripsi : Menghitung dan menampilkan besarnya penjumlahan sub array/tabel T
// Nama : Sulthan Firmansyah
// NIM : 24060121140108
// Lab : B1

#include <stdio.h>

int main (){
	//Kamus
	int i,j,N,NBArray;

    //Algoritma
    printf("Membuat Program Menghitung Array\n");
    printf("Masukan nilai N : ");
    scanf("%d", &N);
    int T[N];
    NBArray = 0;

    for (i = 0; i < N; i++) scanf("%d", &T[i]);

    for (i = 0; i < N; i++) {
        for (j = i; j < N; j++) {
            NBArray += T[j];
        }
    }
    printf("%d", NBArray);

    return 0;
}
