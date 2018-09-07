#include<iostream>
using namespace std;
class xyz
{
	private:
	int a;
	public:
		int b;
		void get()
		{
			cin>>a>>b;
			
		}
		void put()
		{
		
		cout<<a<<endl<<b;
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
