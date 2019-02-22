#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y,sum;
	clrscr();
	cout << "Enter ur no ==> " ;
	cin >> x;
	cout << "Enter another no. ==> ";
	cin >> y;
	int *a,*b;
	a = &x;
	b = &y;
	sum = *a + *b;
	cout << "\nNumber 1 = " << x;
	cout << "\nNumber 2 ==> "  << y;
	cout << "\nSum =  " << sum;
getch();
}