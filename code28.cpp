#include<iostream>
#include<string.h>
using namespace std;
class METROPOLIS{
	public:
		int mcode;
		string mname;
		long int mpop;
		float popdens;
		float area;
		 float calden()
		 {
		 return (popdens/area);
		 }
		 public:
		 	float density;
		 	METROPOLIS(){
			 }
		 	void enter();
		 	void display();
};
void METROPOLIS:: enter()
{
	cout<<"enter a integer,a string,a long integer,a float popdens,a float caldens\n";
	cin>>mcode>>mname>>mpop>>popdens>>area;
	density=calden();
}
void METROPOLIS::display()
{
	cout<<mcode<<" "<<mname<<" "<<mpop<<" "<<density;
}
int main()
{
	METROPOLIS obj1;
	obj1.enter();
	obj1.display();
	return 0;
}
