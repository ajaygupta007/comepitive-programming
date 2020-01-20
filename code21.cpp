#include<iostream>
using namespace std;
class Ajay{
	private:
	Ajay()
	{
		cout<<"hello ajay"<<endl;
	}
	public:
		int age=19;
		
};
class Life :public Ajay{
	public :
		int maxage=76;
};
int main()
{
Life a;
cout<<"left life "<<a.maxage-a.age;
return 0;	
}
