#include<iostream>
using namespace std;
class xyz
{
	int a;
	public:
		int b;
		void get()
		{
			cin>>a>>b;
			
		}
		void put()
		{
		
		cout<<a<<b;
	}
};

main()
{

xyz obj;
cout<<"Enter values";
obj.get();
cout<<"values are:";
obj.put();
}
