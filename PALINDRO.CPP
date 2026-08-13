#include<iostream.h>
#include<conio.h>

void main()
{
	int n,original,reverse=0,rem;
	clrscr();
	cout<<"Enter a number :";
	cin>>n;
	original=n;

	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;

	}
	if(original==reverse)
	{
		cout<<"palindrom";
	}
	else
	{
		cout<<"Not a palindrome";
	}
	getch();

}
