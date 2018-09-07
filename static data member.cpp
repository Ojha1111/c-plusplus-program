//static data member
#include <iostream>
using namespace std;
class xyz
{
	public:
		int code;
		static int qty;
		void get()
		{
			cout<<"Enter code";
			cin>>code;
			qty++;
			
		}
		static void display()
		{
			cout<<"qty is"<<qty;
		}
		
};
int xyz :: qty=0;
main()
{

xyz obj1,obj2,obj3;
obj1.get();
obj2.get();
obj3.get();
xyz :: dispaly();

//obj1,dispaly();
//obj2.display();
//obj3.dispaly();
}
