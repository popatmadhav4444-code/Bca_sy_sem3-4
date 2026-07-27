#include<iostream.h>
#include<conio.h>

void main()
{
	int number,reverse=0,digit;
	clrscr();
	cout<<"\nEnter a number :";
	cin>>number;

	while(number!=0)
	{
		digit=number%10;
		reverse=reverse*10+digit;
		number=number/10;
	}
	cout<<"reversed number ="<<reverse;

	getch();
}