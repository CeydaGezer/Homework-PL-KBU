#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Rules:1)Roll two dice
		 2)Sum of the spots on two upward faces is calculated
		 3)7 or 11 on first throw player wins
		 4)2,3 or 12 on first throw player loses
		 5)4,5,6,8,9,10 becomes players point
		 6)Player must roll his point before rolling 7 to win.*/

int main(int argc, char *argv[]) {
	int dice1,dice2,sum,point;
	
	srand(time(NULL));
	
	dice1=rand()%6+1;
	dice2=rand()%6+1;
	
	printf("Dice1:%d Dice2:%d\n",dice1,dice2);
	
	sum=dice1+dice2;
	
	if(sum==7||sum==11){
		printf("CONGRATULATIONS,YOU WON!!!\n");
	}
	
	else if(sum==2||sum==3||sum==12){
		printf("SORRY,YOU LOST\n");
	}
	
	else{
		point=sum;
		printf("Your point: %d\n",point);

        dice1=rand()%6+1;
		
		dice2=rand()%6+1;
	
		printf("Dice1:%d Dice2:%d\n",dice1,dice2);
	
		sum=dice1+dice2;
		
		if(sum==point){
			printf("SORRY,YOU LOST\n");
			
			}	
		else if (sum==7){
			printf("SORRY,YOU LOST\n");
			
			}			
	}


	
	return 0;
}
