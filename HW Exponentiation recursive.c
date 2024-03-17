#include <stdio.h>
#include <stdlib.h>

// Function to calculate the power of a number without using power function (recursive)

double calculatePower(double base,int exponent){
	
    double result = 1.0;
    int i;


    if (exponent > 0) {
        for ( i=0; i<exponent;i++){
            result *= base;
        }
    }
   
    else if (exponent < 0){
        for (i=0;i>exponent;i--){
            result/= base;
        }
    }
    else {
    	result=1;
	}
    	

    return result;
}

int main(){
	
    double base;
    int exponent;

    printf("Enter the base:");
    scanf("%lf",&base);
    
    printf("Enter the exponent:");
    scanf("%d",&exponent);

    double result=calculatePower(base,exponent);

    printf("Result: %.2lf\n", result);

    return 0;
}
