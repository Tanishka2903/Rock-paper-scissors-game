#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int userScore = 0,CompScore = 0;
	// Display the results and determine the winner
	void Checkoptions(int user, int comp){
		if (user == comp){
			printf("Its a tie\n");
			}
			else if ( user == 1){
				if ( comp == 2){
					printf("You Lost! Try again\n");
					printf("You : Rock\n");
					printf("Computer : Paper\n");
					userScore++;
					}
					else{
						printf("Congratulations! You Won\n");
						printf("You : Rock\n");
					printf("Computer : Scissors\n");
						CompScore++;
					}
					
				}else if (user == 2){
					if(comp == 1){
						printf("Congratulations! You Won\n");
						printf("You : Paper\n");
						printf("Computer : Rock\n");
						userScore++;
					}
						else{
						printf("You Lost! Try again\n");
						printf("You : Paper\n");
					printf("Computer : Scissors\n");
						CompScore++;
					}
				}else if( user == 3){
				
				if(comp == 1){
				
				printf("You lost! Try again\n");
				printf("You : Scissors\n");
				printf("Computer: Rock\n");
					userScore++;
				}
					else{
						printf("Congratulations! You won\n");
						printf("You : Scissors\n");
					printf("Computer : Paper\n");
						CompScore++;
						
					}
				
			} if(user>4 || user<1){
		printf("Invalid number! Please try again.");
	   }
	}
	int main(){
	int Userchoice,Compchoice;
	srand(time(0)); // Initialize the random number generator
	printf("\t\t\t\t Let's play Rock, Paper, Scissors Game\n");
	int name;
	printf(" Name of user: ");
	scanf("%s",&name);
	while(Userchoice != 4){
	printf("\n please select the option: ");
	printf("\n1.Rock");
	printf("\n2.Paper");
	printf("\n3.Scissor");
	printf("\n4.Quit\n");
	scanf("%d",&Userchoice);
	
	Compchoice = (rand() % 3) + 1; // Generate a random choice for the computer
	Checkoptions(Userchoice,Compchoice);
	}
}

	

	
	
		
	
	
	

