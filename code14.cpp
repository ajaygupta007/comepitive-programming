#include<iostream>
using namespace std;
class Human{
	private:
		int age=9;
		public:
			void displayAge()
			{
				cout<<age<<endl;
			}
			void setAge(int value)
			{
				age=value;
			}
};
int main()
{
	Human anil;
	anil.displayAge();
	anil.setAge(24);
	anil.displayAge();
	return 0;
}
