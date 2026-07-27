#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,x,y;
	clrscr();
	for(i=10;i>=-10;i--)
	{
		for(j=-20;j<=20;j++)
		{
			double a=x/20.0;
			double b=y/10.0;

			if((a*a+b*b-1)*(a*a+b*b-1)*(a*a+b*b-1)-(a*a*b*b*b<=0))
				cout<<"*";
			else
				cout<<" ";

		}

	}
	getch();
}