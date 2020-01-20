#include<iostream>
#include<string.h>
using namespace std;
class Human{
	private:
		int age;
		string name;
		
	public:
		Human()
		{
			name="noname";
			age=0;
			cout<<"constructor called"<<endl;
		}
		void dispaly()
		{
			cout<<name<<endl<<age<<endl;
		}
};
int main()
{
	Human anil;
	anil.dispaly();
	return 0;
}
