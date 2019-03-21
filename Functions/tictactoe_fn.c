#include<stdio.h>
void read_board(int board[3][3])
{
	int i, j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&board[i][j]);
}
int count_empty(int board[][3])
{
	int i,j,empty_count=0;
	for(i=0;i<3;i++)	
	{
	for(j=0;j<3;j++)
	if(board[i][j]==0)
	empty_count++;
	}
	return empty_count;
}
bool row_wise_check(int board[][3],int player)
{
	int i,j,win=0;		
		for(i=0;i<3;i++)
		{
			if(tictactoe[i][0]==player && tictactoe[i][1]==player && tictactoe[i][2]==player)
			{
			printf("Player1 has won\n");
			win = 1;
			}

		}
	return win;
}
void main()
{
	int tictactoe[3][3],i,j,empty_count=0,win=0;
	read_board(tictactoe);
	empty_count=count_empty(tictactoe);
	if(empty_count==9)
	printf("The board is empty");
	else
	{

		win = row_wise_check(tictactoe,1);
		if(win)
		printf("Player1 has won\n");
		else
		win = row_wise_check(tictactoe,2);
		if(win)
		printf("Player2 has won\n");
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











