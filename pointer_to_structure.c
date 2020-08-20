#include<stdio.h>
struct Student
{
	int x;
};
int main()
{
	struct Student p1;
	struct Student *p2=&p1;
	p2->x=65;
	printf("Value of x is : %d\n",p2->x);
	printf("Valueof x' is : %d\n",p1.x);
	return 0;
}
