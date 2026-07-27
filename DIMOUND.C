#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			cout<<"  ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<k<<" ";
		}
		for(j=i-1;j>=1;j--)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	for(i=4;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			cout<<"  ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<k<<" ";

		}
		for(j=i-1;j>=1;j--)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	getch();
}