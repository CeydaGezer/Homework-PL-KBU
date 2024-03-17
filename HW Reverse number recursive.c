#include <stdio.h>
#include <stdlib.h>

// This code aims to reverse a given integer using recursion.

int reverse_func(int num) {
    static int sum = 0; 
    int rem;

    if (num!= 0) {
        rem=num % 10;
        sum=sum*10+rem;
        reverse_func(num/10);
    }

    return sum;
}

int main(){
    int num, result;

    printf("Please enter the number:");
    scanf("%d",&num);

    result = reverse_func(num);
    printf("The reverse of entered number is: %d\n", result);

    return 0;
}
