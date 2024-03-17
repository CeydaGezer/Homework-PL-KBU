#include <stdio.h>
#include <stdlib.h>

// This code aims to calculate the Least Common Multiple (LCM) of two given integers using recursion.

int lcm(int a, int b){
	
    static int m=0;
   
    m += b; //Increments m by adding max value to it

    if((m%a==0)&&(m%b==0)){
        return m;  //If found a common multiple then return the m.
    }
    
    else{
        lcm(a, b);
    }
    
}


int main()
{
    int a,b,result;

    printf("Please write the first number:");
    scanf("%d", &a);
    
    
    printf("Please write the second number:");
    scanf("%d",&b);
    

    if(a>b)
        result=lcm(a,b);
        
    else
        result=lcm(a,b);
        
    printf("The LCM of %d and %d:%d\n\n",a,b,result);
    
    return 0;
}


