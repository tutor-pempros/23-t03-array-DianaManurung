// NIM - NAMA

#include <stdio.h>

int main(){
    int Angka[100], min, max, n;

    printf("Masukkan 9 angka antara -100 dan 100:\n");
    for(int i = 0; i < 9; i++){
        scanf("%d", &n);
        // Check if the number is between -100 and 100
        if(n >= -100 && n <= 100){
            Angka[i] = n;
        } else {
            printf("Angka harus antara -100 dan 100. Silahkan coba lagi.\n");
            i--; // Decrement the counter to repeat the iteration
        }
    }

    // Set min and max to the first number
    min = max = Angka[0];

    // Find the min and max
    for(int i = 0; i < 9; i++){
        if(Angka[i] < min) min = Angka[i];
        if(Angka[i] > max) max = Angka[i];
    }

    // Print the min and max
    printf("Nilai terkecil: %d\n", min);
    printf("Nilai terbesar: %d\n", max);

    return 0;
}