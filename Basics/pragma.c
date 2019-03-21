#include<stdio.h>
#pragma pack(1)
struct s
{
	int a;
	char b;
	int c;
};
int main()
{
	struct s v;
	printf("%ld",sizeof v);
}
