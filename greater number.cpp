#include<iostream>
using namespace std;
class xyz
{
	public:
	int a;
	int b;
	
		void f1()
		{
			cin>>a>>b;
			if(a>b)
			cout<<"a is greater";
			else
			cout<<"b is greater";
		}
		
};

main()
{

xyz obj;
cout<<"Enter values";
obj.f1();
}
