#include<iostream>
using namespace std;
int main()
{
	int feet=3;
	float meter;
	cout<<"Feet\tMeter\n";
	while(feet<=30)
	{
		meter=3.28*feet;
		cout<<feet<<"\t"<<meter<<"\n";
		feet+=3;
	}
}
