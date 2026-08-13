#include<iostream.h>
#include<conio.h>

void swap(int ,int);
void swap1(int *,int *);

void main()
{
	int a,b;
	clrscr();
	cout<<"Entre two numbers:";
	cin>>a>>b;
	cout<<"\n Before swap()a="<<a<<"\tb="<<b;
	swap(a,b);
	cout<<"\n After swap() a="<<a<<"\tb="<<b;
	cout<<"\n Before swap() a="<<a<<"\tb="<<b;

	swap1(&a,&b);
	cout<<"\n After swap1()a="<<a<<"\tb="<<b;

	getch();
}
void swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;

	cout<<"\n Inside swap()a="<<a<<"\tb="<<b;
}
void swap1(int *a,int *b)
{
	int c= *a;
	*a = *b;
	*b = c;

	cout<<"\n Inside swap1()a="<<*a<<"\tb="<<*b;
}