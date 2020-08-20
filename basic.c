#include<stdio.h>
struct Student
{
	int roll_no;
};
int main()
{
	struct Student obj;
	obj.roll_no = 1;
	printf("Student Roll number is : %d\n",obj.roll_no);
	return 0;
}

