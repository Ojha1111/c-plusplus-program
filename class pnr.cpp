#include<iostream>
using namespace std;
class xyz
{
	private:
	int p;
	private:
		int n;
	public:
		int si;
		int r;
		void get()
		{
			cin>>p>>n>>r;
			
		}
		void put()
		{
		
	
		si=(p*n*r)/100;
		cout<<si;
		
	}
};

main()
{

xyz obj;
cout<<"Enter values";
obj.get();
cout<<"The simple interest is:";
obj.put();
}
