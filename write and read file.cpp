#include<iostream>
#include<fstream>
using namespace std;
class student
{
	char name[10];
	int rn[10];
	public:
   void getdata()
   {
   	cout <<" enter the name of the student";
   	cin>>name;
   	cout<<"enter the roll number of the student";
   	cin>>rn;
   }
   void putdata()
   {
   	cout<<"name is ="<<name;
   	cout<<"roll number is ="<<rn;
   }
   };
   main()
   {
   	student stu;
   	fstream file;
   	file.open("test.dat",ios::binary|ios::out);
   	for(int i=1;i<3;i++)
   	  {
   		cout<<"student details are"<<endl;
   		stu.getdata();
   		file.write((char*)&stu,sizeof(stu));
	   }
	   file.close();
	   file.open("test.dat",ios::binary|ios::in);
	   file.read((char*)&stu,sizeof(stu));
	   while(!file.eof())
	   {
	   	cout<<"student is"<<endl;
	   	stu.putdata();
	   	file.read((char*)&stu,sizeof(stu));
	   }
}
   
   

