#include<iostream>
using namespace std;
class xyz
{
	private:
	int a;
	int b;
	
	public:
		int avg;
		int c;
		int d;
		int e;
		void get()
		{
			cin>>a>>b>>c>>d>>e;
			
		}
		void put()
		{
		
	
		avg=(a+b+c+d+e)/5;
		cout<<avg;
		
	}
};

main()
{

xyz obj;
cout<<"Enter values";
obj.get();
cout<<"The avg is:";
obj.put();
}
