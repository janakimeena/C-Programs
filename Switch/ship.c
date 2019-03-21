#include<stdio.h>
void main()
{
	char type;
	scanf("%c",&type);
	switch(type)
	{
	case 'b':
	case 'B':
	printf("Battleship\n");
	break;
	case 'c':
	case 'C':
	printf("Cruiser\n");
	break;
	case 'd':
	case 'D':
	printf("Destroyer\n");
	break;
	case 'f':
	case 'F':
	printf("Frigate\n");
	break;
	default:
	printf("invalid option");
	}
}







