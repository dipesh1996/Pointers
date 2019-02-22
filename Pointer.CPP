#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	cout << "Enter ur no ==> " ;
	cin >> num;
	int *pointer;
	pointer = &num;
	cout << "\nNumber = " << num;
	cout << "\nPointer = " <<pointer;
	cout << "\nPointers value = " << *pointer;

getch();
}