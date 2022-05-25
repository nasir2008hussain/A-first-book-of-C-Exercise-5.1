#include<iostream>
using namespace std;
int main()
{
	float c=-10.0;
	float f;
	cout<<"Degree\tDegree\nCelsius\tFahrenheit\n_____\t_______\n";
	while(c<=60)
	{
	  f=(9.0/5.0)*c+32.0;
	  cout<<c<<"\t"<<f<<"\n";
	  c+=10;
	}
}
