#include<iostream.h>
#include<conio.h>

void main()
{
	float *p,*q,sum=0;
	int n,i;
	clrscr();
	cout<<"\nenter N value :";
	cin>>n;
	p= new float[n];
	q=p;
	for(i=0;i<n;i++)
	{
		cout<<"Enter value :"<<i+1<<":" ;
		cin>>p[i];

	}
	for(i=0;i<n;i++)
	{
		cout<<endl<<*p;
		sum+=*p;
		p++;
	}
	cout<<"\n sum="<<sum;
	delete[]p;
	getch();
}


