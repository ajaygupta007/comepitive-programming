#include<iostream>
using namespace std;
class Complex{
	int real;
	int imag;
	public:
	Complex(int,int);
	int operator==(Complex);
	
};
int Complex::operator==(Complex temp)
{
		if(temp.real==real && temp.imag==imag)
		return 1;
		else
		return 0;
	}
Complex :: Complex(int x,int y)
{
	real=x;
	imag=y;
}
int main()
{
	Complex obj1=Complex(10,20);
	Complex obj2(20,20);
	if(obj1==obj2)
	printf("yes\n");
	else 
	printf("no\n");
	return 0;
}
