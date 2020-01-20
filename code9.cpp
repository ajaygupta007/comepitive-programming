#include<iostream>
using namespace std;
class Employee{
	public:
		int id;
		string name;
		float salary ;
		Employee(int id,string name,float salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void insert(int i,string n,float f)
		{
			id=i;
			name=n;
			salary=f;
		}
		void display()
		{
			cout<<id<<" "<<name<<" "<<salary<<endl;
		}
};
int main()
{
//	Employee e1= Employee(101,"sonoo",890000);
//	Employee e2= Employee(102,"nakul",590000);
	Employee s1;
	s1.insert(201,"sonoo",34566);
	//e1.display();
	//e2.display();
	s1.display();
	return 0;
}
