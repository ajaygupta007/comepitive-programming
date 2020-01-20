#include<iostream>
#include<stdio.h>
#include<stdlib.h>
class ajay{
	int a;
	int b;
	public:
	ajay(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
{
		printf("%d %d",a,b);
}
};

int main()
{
	ajay obj1(2,3);
	obj1.display();
	return 0;
}
