#include<iostream>
using namespace std;
class Human{
	public :
		string name;
		void introduce()
		{
			cout<<"hi "<<name<<endl;
			
		}
};
int main()
{
	Human anil;
	Human *bunty= new Human();
	anil.name="anil";
	anil.introduce();
	bunty->name="bunty";
	bunty->introduce();
	return 0;
}
