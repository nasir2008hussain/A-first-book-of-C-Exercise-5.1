#include<iostream>
using namespace std;
int main()
{
	int f=0;
	float ex_c,app_c,diff=0.0;
	while(diff<=4.0)
	{
		app_c = (f - 30.0) / 2.0;
	    ex_c= ((f * 5.0)-(5.0 * 32))/9;
		cout<<ex_c<<"\t\t"<<app_c<<endl;
		diff=(ex_c-app_c);
		f+=2;

	}
}
