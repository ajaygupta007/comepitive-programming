#include<iostream>
using namespace std;
class stack{
	public :
		char * data_;
		int top_;
	public :
		int empty()
		{
			return (top_ == -1);
		}
		void push(char x)
		{
			data_[++top_]=x;
		}
		void pop()
		{
			--top_;
		}
		char top(){
			return data_[top_];	
			}
			
};
int main()
{
	Stack s;
	char str[10]="ABCDE";
	s.data = new char[100];
	s.top_ = -1;
	for(int i=0;i<5;++i)
	s.push(str[i]);
	s.top_=2;
	while(!s.empty())
	{
		cout<< s.top();
		s.pop();
	}
	return 0;
	
}
