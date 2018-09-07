#include<iostream>
using namespace std;
class xyz
{
	public:
	int a;
	
		void f1()
		{
			cin>>a;
			if((a%2)==0)
			cout<<"even";
			else
			cout<<"odd";
		}
		
};

main()
{

xyz obj;
cout<<"Enter values";
obj.f1();
}
