#include <stdio.h>
#include <stdlib.h>

//This code aims to find and print all capital letters (uppercase letters) in a given string.

void findCapitals(char str[],int i) {
    
    if (str[i]=='\0')
        return;

    
    if (str[i]>='A'&& str[i] <='Z')
        printf("%c", str[i]);

    findCapitals(str,i+1);
}

int main() {
    char str[100];


    printf("Enter a string: ");
    scanf("%s", str);

    printf("Capital letters in the string: ");
    findCapitals(str,0);


    return 0;
}
