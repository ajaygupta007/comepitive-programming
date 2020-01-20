#include<iostream>
#include<string.h>
// if  write any constructor then default constructor not call itself 
// then we pass value of constructor varabile when intialize
//above statement may not clear
using namespace std;
class Human{
	private:
		int age;
		string name="ajay";
		
	public:
		Human()
		{
			cout<<"default constructor"<<endl;
		}
		Human(string iname)
		{
			cout<<"name as papameter"<<endl;
			name=iname;
		}
		void dispaly()
		{
			cout<<name<<endl;
		}
	};
	int main()
	{
		Human anil;
		anil.dispaly();
		
		Human andy("andyt");
		andy.dispaly();
		return 0;
	}
