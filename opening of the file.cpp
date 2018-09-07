#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char c;
	cout<<"enter the character";
	cin>>c;
	ofstream fout("ABC.txt");
	while(c!='x')
	{
		fout.put(c);
		cin>>c;
	}
	fout.close();
	ifstream fin("ABC.txt");
	char  j;
	cout<<"content of file are";
	while(fin)
	{
		fin.get(j);
		cout<<j;
	}
	fin.close();
}
