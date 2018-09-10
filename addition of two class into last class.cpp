#include<iostream>
using namespace std;
class two
class one
{
int a;
public:
	void getdata()
	{
cout<<"Enter values";
cin>>a;
}
friend void add(one, two);
};
	
class two
{
	int b;
	public:
		void getdata()
		{
			b=getdata();
			
		}
		friend void add (one, two);
	};

void add(one o, two t)
{
	cout<<"After adding"<<o.a=t.b;

}
main() {
one o1;
two t1;
o1.getdata();
t1.getdata();

add(o1,t1);
}
