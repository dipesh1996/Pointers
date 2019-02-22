#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int A,B,Choice,wish;
 MENU:
 int *x,*y;
 clrscr();
 cout << "Enter Value A=>";
 cin >> A;
 cout << "Enter Value B=>";
 cin >> B;
 x=&A;
 y=&B;
 cout << " Press 1 for Addition.";
 cout << "\n Press 2 for Subtraction";
 cout << "\n Press 3 for Multiplication";
 cout << "\n Press 4 for Division";
 cout << "\n Press 5 for EXIT";
 cout << "\nEnter ur function=>";
 cin >> Choice;

 if(Choice==1)
 {
  cout << "Ur Addition is " << *x + *y;
 }

  else if(Choice==2)
 {
  cout << "Ur Subtraction is " << *x - *y;
 }

 else if(Choice==3)
 {
  cout << "Ur Multiplication is " << *x * *y;
 }

 else if(Choice==4)
 {
  cout << "Ur Division is " << *x / *y;
 }
 else if(Choice==5)
 {
//  printf("Exit");
	exit(0);
 }
 else
 {
  cout << "Ur entered function is not valid";
  goto MENU;
 }

 cout << "\nYou want to continue ur operation????";
 cout << "\nPress 1 for continue.";
 cout << "\nPress 2 for exit.";

 cout << " Enter ur Digit=>";
 cin >> wish;

 if(wish==1)
 {
  goto MENU;
 }
  else if(wish==2)
 {
  exit(0);
 }
 getch();
}

