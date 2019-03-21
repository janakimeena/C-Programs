#include<stdio.h>
void main()
{
	int tictactoe[3][3],i,j,empty=0;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&tictactoe[i][j]);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if(tictactoe[i][j]==-1)
		empty++;
	}
	if(empty==9)
		printf("Empty");
	if(tictactoe[0][0]==1&&tictactoe[0][1]==1&&tictactoe[0][2]==1)
	printf("Player1 wins");
		if(tictactoe[1][0]==1 && tictactoe[1][1]==1&&tictactoe[1][2]==1)
	printf("Player1 wins");
	if(tictactoe[2][0]==1&&tictactoe[1][1]==1&&tictactoe[2][2]==1)
	printf("Player1 wins");

	if(tictactoe[0][0]==1&&tictactoe[1][0]==1&&tictactoe[2][0]==1)
	printf("Player1 wins");
	if(tictactoe[0][1]==1&&tictactoe[1][1]==1&&tictactoe[2][1]==1)
	printf("Player1 wins");

if(tictactoe[0][2]==1&&tictactoe[1][2]==1&&tictactoe[2][2]==1)
	printf("Player1 wins");

if(tictactoe[0][0]== 1 && tictactoe[1][1]== 1 && tictactoe[2][2]== 1)

	printf("Player1 wins");

if(tictactoe[0][2]== 1 && tictactoe[1][1]== 1 && tictactoe[2][0]== 1)

	printf("Player1 wins");













}











