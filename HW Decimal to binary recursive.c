#include <stdio.h>
#include <stdlib.h>

//This code aims to convert a decimal number into its binary equivalent using recursion.

void decimalToBinary(int decNo) {
	
    if (decNo > 0) {
    	
        decimalToBinary(decNo / 2);
        printf("%d", decNo % 2);
    }
}

int main() {
	
    int decNo;

    printf("Enter a decimal number: ");
    scanf("%d", &decNo);

    printf("Binary equivalent: ");
    decimalToBinary(decNo);

    return 0;
}
