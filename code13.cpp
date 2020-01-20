#include<iostream>
#include<string.h>
using namespace std;
class Human{
	public:
		static string name;
		void introduce();
};
string Human::name="anil";
 void Human::introduce()
{
cout<<Human::name<<endl;
	 
}
int main()
{
	Human anil;
	//anil.name="anil";
	anil.introduce();
	return 0;
}
