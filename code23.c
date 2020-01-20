#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
class space
{
	int x;
	int y;
	int z;
	public:
		void getdata(int a,int b,int c);
		void display();
		void operator~();
};
void space :: getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void space :: display()
{
	cout<< x <<" ";
	cout<< y <<" ";
	cout<< z <<"\n";
	
}
void space :: operator~()
{
	x=-x;
	y=-y;
	z=-z;
}
int main()
{
	space obj;
	obj.getdata(10,-20,30);
	cout<<" S : ";
	obj.display();
	-obj;
	cout<<"S : ";
	S.display();
	return 0;
	}
