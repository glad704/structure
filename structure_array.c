#include<stdio.h>
struct Student
{
	int x;
};
int main()
{
	struct Student p1[2];
	p1[0].x=5;
	p1[1].x=45;
	printf("Value of x is : %d\n",p1[0].x);
	printf("Value of x'is : %d\n",p1[1].x);
	return 0;
}

