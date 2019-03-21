#include<stdio.h>
struct a{
	int i;
	float f;
};
void main()
{
	int num;
	int *nump;
	float f,*fp;
	char c,*cp;
	struct a *s;
	num=5;
	f=5.5555;
	nump=&num;
	fp=&f;
	printf("%ld\n%ld\n%ld\n",sizeof(nump),sizeof(fp),sizeof(cp));
	printf("%ld\n%ld\n",sizeof(struct a),sizeof(s));
}









