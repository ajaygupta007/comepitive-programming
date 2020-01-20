#include<iostream>
using namespace std;
template<class T>
void fun(T x)
{
	cout<<x<<endl;
}
int main()
{
	int a=10;
fun(a);
char s='a';
fun(s);
return 0;	
}
