#include <stdio.h>
#include <stdlib.h>

/*Starting with a positive integer n, the next term in the sequence is 3n+1 if n is odd or n/2 if n is even*/

void hailstone(int n){
	
    printf("%d",n);
    
    if (n==1){
        return; // Base case: If n reaches 1, stop recursion
    }
    if (n%2==0){	
        hailstone(n/2); // If n is even, divide it by 2
        
    } else {
        hailstone(3*n+1); // If n is odd, multiply it by 3 and add 1
    }
}

int main(){
	
    int num;
    
    printf("Enter a number to generate its Hailstone sequence:");
    scanf("%d",&num);
    
    hailstone(num);
    
    return 0;
}
