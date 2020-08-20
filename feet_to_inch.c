#include<stdio.h>
typedef struct distance
{
	int inch;
	int feet;
}Distances;
int main()
{
	Distances p1[2],p2[2],*p3;
	printf("Enter Ist feet : \n");
	scanf("%d",&p1[0].feet);
	printf("Enter Ist inch : \n");
	scanf("%d",&p1[1].inch);
	printf("Enter 2nd feet : \n");
	scanf("%d",&p2[0].feet);
	printf("Enter 2nd inch : \n");
	scanf("%d",&p2[1].inch);
	p3->feet=p1[0].feet+p2[0].feet;
	p3->inch=p1[1].inch+p2[1].inch;
	printf("Final feet value is : %p\n",&p3->feet);
	printf("Final inch value is : %p\n",&p3->inch);
	return 0;
}

