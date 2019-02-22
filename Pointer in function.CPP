#include<stdio.h>
#include<iostream.h>
#include<conio.h>
int exchange(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return 0;
}
void main()
{
	int num1,num2;
	clrscr();
	cout << "Enter ur no 1 ==> " ;
	cin >> num1;
	cout << "Enter another no. 2 ==> ";
	cin >> num2;
	exchange(&num1,&num2);
	cout << "\nNumber 1 ==> " << num1;
	cout << "\nNumber 2 ==> " <<  num2;
	getch();
}