#include<iostream>
using namespace std;
int main()
{
	int g=10;
	float l;
	cout<<"Gallons\tLitre\n";
	while(g<=20)
	{
		l=g*3.785;
		cout<<g<<"\t"<<l<<"\n";
		g++;
	}
}
