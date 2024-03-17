#include <stdio.h>
#include <stdlib.h>

/* M(k)=  k-10       k>100
        M(M(k+11))    k<=100*/
        
int mc91(int k){
	
	if (k>100)
		return k-10;
		
	else 
		return mc91(mc91(k+11));
}        

int main(int argc, char *argv[]) {
	
	int num,result;
	
	printf("Please enter the number:");
	scanf("%d",&num);
	
	result=mc91(num);
	printf("Function value:%d",result);
	
	return 0;
}
