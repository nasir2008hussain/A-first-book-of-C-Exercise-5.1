#include<iostream>
using namespace std;
int main()
{
	int y=1,dep=4000,e=28000,acc=0;
	cout<<"Year\tDepricated\tEnd of year\tAccumulated\n";
	while(y<=7)
	{
		e=e-4000;
		acc=acc+4000;
		cout<<y<<"\t"<<dep<<"\t"<<e<<"\t"<<acc<<endl;
		y++;
	}
}
