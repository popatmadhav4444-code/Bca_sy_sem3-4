#include<iostream.h>
#include<conio.h>

void main()
{
	int num,minimum,maximum ,true=1;
	clrscr();
	cout<<"Enter a number(-999 to stop):";
	cin>>num;

	if(num==-999)
	{
		cout<<" no numbers were entered."<<endl;

	}
	minimum=maximum=num;

	while(true)
	{
		cin>>num;
		{
			if(num==-999)
			break;
		}
		if(num<minimum)
		minimum=num;

		if(num>maximum)
		maximum=num;
	}
	cout<<"minimum="<<minimum<<endl;
	cout<<"maximum="<<maximum<<endl;

	getch();

}