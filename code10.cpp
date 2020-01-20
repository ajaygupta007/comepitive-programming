#include<iostream>
class METROPOLIS{
	private:
	int MCode;
char MName[1000];
	long int MPop;
	float Area;
	float PopDens;
	float CalDen()
	{
		return (PopDens/Area);
	}
	public:
	   void Enter();
	   void ViewAll();
};
int main()
{
void METROPOLIS::Enter()
 {
	   	cin>>Mcode;
	   	cin>>MName;
	   	cin>>MPop;
	   	cin>>Area;
	   	CalDen();
	   }
	   void METROPOLIS:: ViewAll()
	   {
	   	cout<<"MCode value="<<MCode<<endl;
	   	cout<<"MName value="<<MName<<endl;
	   	cout<<"MPop value="<<MPop<<endl;
	   	cout<<"Area value="<<Area<<endl;
	   	cout<<"PopDens value="<<PopDens<<endl;
	   	cout<<"Highly Populated Area";
	   }
	   return 0;
}
