#include <stdio.h>
#include <stdlib.h>

// This code aims to generate and print all possible combinations of numbers of a given length (specified by the user) without repetition.

void olustur(int sayi, int basamak, int basla) {
    int i;

    if (basamak == 0) {
        printf("%d\n", sayi);
    } else {
        for (i = basla + 1; i <= 9; i++) {
            olustur(10 * sayi + i, basamak - 1, i); // her �a�r�da basla de�erini i olarak g�ncelliyoruz
        }
    }
}

int main(int argc, char *argv[]) {
    int basamak;

    printf("Please write the digit number: ");
    scanf("%d", &basamak);

    olustur(0, basamak, 0); // Ba�lang�� say�s� 0'd�r, ba�lang�� basama�� da 0'd�r.

    return 0;
}
