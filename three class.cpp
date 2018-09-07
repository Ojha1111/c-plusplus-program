#include<iostream>
using namespace std;
class two;
class three;
class one
{
int a;
public:
	void getdata()
	{
cout<<"Enter values";
cin>>a;
}
friend void add(one, two, three);
};
	
class two
{
	int b;
	public:
		void getdata()
		{
			cout<<"Enter values";
			cin>>b;
			
		}
		friend void add (one, two, three);
	};
class three
{
	int c;
	public:
		void getdata()
		{
			cout<<"Enter values";
			cin>>c;
			
		}
		friend void add (one, two, three);
		
};
void add(one o, two t, three h)
{
	cout<<"After adding"<<o.a+t.b+h.c;

}
main() {
one o1;
two t1;
three h1;
o1.getdata();
t1.getdata();
h1.getdata();
add(o1,t1,h1);
}
