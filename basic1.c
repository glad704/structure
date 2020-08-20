#include<stdio.h>
struct Student
{
	int roll_no;
};
int main()
{
	struct Student obj[2];
	obj[0].roll_no=1;
	obj[1].roll_no=2;
	printf("Student roll number is : %d\n",obj[0].roll_no);
	printf("Student roll number is : %d\n",obj[1].roll_no);
	return 0;
}
