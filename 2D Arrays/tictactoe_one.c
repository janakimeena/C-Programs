#include<stdio.h>
void main()
{
	int tictactoe[3][3],i,j,empty_count=0,win=0;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&tictactoe[i][j]);
	for(i=0;i<3;i++)	
	{
	for(j=0;j<3;j++)
	if(tictactoe[i][j]==0)
	empty_count++;
	}
	if(empty_count==9)
	printf("The board is empty");
	else
	{
		//Row wise check
		for(i=0;i<3;i++)
		{
			//check for player 1
			if(tictactoe[i][0]==1 && tictactoe[i][1]==1 && tictactoe[i][2]==1)
			{
			printf("Player1 has won\n");
			win = 1;
			}
			//check for player 2
			if(tictactoe[i][0]==2 && tictactoe[i][1]==2 && tictactoe[i][2]==2)
			{
			printf("Player2 has won\n");
			win=1;
			}
		}

		//Column wise check
		for(i=0;i<3;i++)
		{
			//check for player 1
			if(tictactoe[0][i]==1 && tictactoe[1][i]==1 && tictactoe[2][i]==1)
			{
			printf("Player1 has won\n");
			win = 1;
			}
			//check for player 2
			else if(tictactoe[0][i]==2 && tictactoe[1][i]==2 && tictactoe[2][i]==2)
			{
			printf("Player2 has won\n");
			win=1;
			}
		}		
	}	
	//Diagonal1 check
	if ((tictactoe[0][2]==1)&&(tictactoe[1][1]==1)&&(tictactoe[2][0]==1))
	{
	printf("Player1 wins\n");
	win=1;
	}
	if ((tictactoe[0][2]==2)&&(tictactoe[1][1]==2)&&(tictactoe[2][0]==2))
	{
	printf("Player2 wins\n");
	win=1;
	}

	//Diagonal2 check
	if ((tictactoe[0][0]==1)&&(tictactoe[1][1]==1)&&(tictactoe[2][2]==1))
	{
	printf("Player1 wins\n");
	win = 1;
	}
	if ((tictactoe[0][0]==2)&&(tictactoe[1][1]==2)&&(tictactoe[2][2]==2))
	{
	printf("Player2 wins\n");
	win = 1;
	}
	if ((empty_count==0)&&(win==0))
	printf("Draw\n");
	else if ((empty_count<9)&&(win==0))
	printf("Intermediate\n");
	}

}











