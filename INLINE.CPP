#include<iostream.h>
#include<conio.h>
inline int max(int x, int y)

{
	if(x>y)
		return x;
	else
		return y;

}
void main()
{
	int x,y,z;
	clrscr();
	cout<<"Enter two number :";
	cin>>x>>y;
	z=max(x,y);
	cout<<"\n x="<<x<<"\t y="<<y<<"\t z="<<z;
	getch();
}
