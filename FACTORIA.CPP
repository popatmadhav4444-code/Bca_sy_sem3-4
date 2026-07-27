#include<iostream.h>
#include<conio.h>
int factorial(int x);
void main()
{
		     int a,b ,number;
		     clrscr();
		     cout<<"\nEnter a number :"	;
		     cin>>number;
		     b=factorial(a);
		     cout<<"b";
		     cin>>b;
		     getch();
}
int factorial(int x)
{
	int r=1;
	if(x==1)
		return 1;
	else
		r=x*factorial(x-1);
		return r;
}