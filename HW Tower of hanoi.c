#include <stdio.h>
#include <stdlib.h>

/* Tower of Hanoi rules:
  Only one disc can be moved at a time.
  Only the top disc of one stack can be transferred to the top of another stack or an empty rod.
  Larger discs cannot be stacked over smaller ones.*/
  
void hanoi(int n, char from_rod, char to_rod, char aux_rod){
	
	if(n==1){
		printf("Move disk 1 from rod %c to rod %c ",from_rod,to_rod);
		return;
	}
	
	else{
		hanoi(n-1,from_rod,aux_rod,to_rod);
		printf("Move disk %d from rod %c to rod %c ",n,from_rod,to_rod );
		hanoi(n-1, aux_rod, to_rod, from_rod);
	}
} 

int main(int argc, char *argv[]) {
	
    int n = 3; // Number of disks
    
    char from_rod='A',to_rod='C',aux_rod='B';

    hanoi(n, from_rod, to_rod, aux_rod);

    return 0;
}
