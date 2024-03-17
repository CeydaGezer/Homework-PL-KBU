#include <stdio.h>
#include <stdlib.h>

// This code aims to generate and print all possible combinations of numbers of a given length (specified by the user) without repetition.

void olustur(int sayi, int basamak, int basla) {
    int i;

    if (basamak == 0) {
        printf("%d\n", sayi);
    } else {
        for (i = basla + 1; i <= 9; i++) {
            olustur(10 * sayi + i, basamak - 1, i); // her çaðrýda basla deðerini i olarak güncelliyoruz
        }
    }
}

int main(int argc, char *argv[]) {
    int basamak;

    printf("Please write the digit number: ");
    scanf("%d", &basamak);

    olustur(0, basamak, 0); // Baþlangýç sayýsý 0'dýr, baþlangýç basamaðý da 0'dýr.

    return 0;
}
