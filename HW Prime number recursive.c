#include<stdio.h>
#include<stdlib.h>

// This code aims to determine whether a given number is a prime number or not using recursion.

int prime_func(int num,int i){
		
    if(i==1){
        return 1;
    }
    else if(num%i==0){
         return 0;
    }     
    else{
    
         prime_func(num,i-1);
      }
}

int main(){

    int num,primeNo,i;
	
    printf(" Please enter a positive number: ");
    scanf("%d",&num);
    
    i=num/2;

    primeNo=prime_func(num,i);

   if(primeNo==1)
        printf("It is a prime number");
   else
      printf("It is not a prime number");
   return 0;
}


