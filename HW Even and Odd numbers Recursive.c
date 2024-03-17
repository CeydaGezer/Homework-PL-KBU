#include <stdio.h>
#include <stdlib.h>

// This code aims to print all even and odd numbers within a specified range starting from 1, up to a given limit (n).

void EvenAndOdd(int start, int n){
	
    if(start>n)
        return;
        
    printf("%d ",start);
    EvenAndOdd(start+2, n);
}
 
int main(){
    int n;
    
    printf("Input the range to print starting from 1:");
    scanf("%d",&n);
    
    
    printf("\n All even numbers from 1 to %d are: ", n);
     EvenAndOdd(2, n); 
     
    printf("\n\n All odd numbers from 1 to %d are: ", n);
    EvenAndOdd(1, n);
    
    return 0;
}

