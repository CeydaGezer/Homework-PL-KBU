#include <stdio.h>
#include <stdlib.h>

/*There is a floor which has length as n and m weight as m. How many ways are there to tile that floor?*/

int countWays(int n, int m) {
	
    
    if (n<=m){// Base cases:If the floor length is less than or equal to m,there is only one way to tile it.
                   
        return 1;
    }
    
    else {     /* If the floor length is greater than m, we have two options:
               1. Place a tile vertically and recurse for the remaining (n - 1) length
               2. Place a tile horizontally and recurse for the remaining (n - m) length*/
               
    return countWays(n-1,m)+countWays(n-m,m);
    
	}
}

int main() {
    int n, m;
    
    printf("Enter the length and width of the floor (n x m): ");
    scanf("%d %d",&n, &m);
    printf("Number of ways to tile the floor: %d\n", countWays(n, m));
    
    return 0;
}

