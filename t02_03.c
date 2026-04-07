// 12S25030 - Nina Theresia Tarigan

#include <stdio.h>

int main() {
    char op;
    int angka, hasil, i;
    int riwayat[5]; 

    scanf(" %c", &op);

    if (op == '*') hasil = 1;
    else hasil = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &angka);
        
        if (angka == -1) {
            printf("%c\n", op);
            int temp_hasil = (op == '*') ? 1 : 0;
            for (int j = 0; j < i; j++) {
                printf("%d\n", riwayat[j]);
                if (op == '+') temp_hasil += riwayat[j];
                else if (op == '-') temp_hasil -= riwayat[j];
                else if (op == '*') temp_hasil *= riwayat[j];
                printf("%d\n", temp_hasil);
            }
            printf("-1\n0\n");
            return 0;
        }

        riwayat[i] = angka;
        
        if (op == '+') hasil += angka;
        else if (op == '-') hasil -= angka;
        else if (op == '*') hasil *= angka;

        printf("%c\n", op);
        int print_hasil = (op == '*') ? 1 : 0;
        for (int j = 0; j <= i; j++) {
            printf("%d\n", riwayat[j]);
            if (op == '+') print_hasil += riwayat[j];
            else if (op == '-') print_hasil -= riwayat[j];
            else if (op == '*') print_hasil *= riwayat[j];
            printf("%d\n", print_hasil);
        }
        
        if (i == 3) break; 
    }

    return 0;
}