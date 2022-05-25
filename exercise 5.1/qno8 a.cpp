#include<iostream>
using namespace std;
int main()
{
	float app_c,ex_c,diff=0.0,f=0;
	while(diff<=4.0)
	{
		app_c= (f -30) /2;
		ex_c= ((f * 5.0)-(5.0 * 32))/9;
		diff=(ex_c-app_c);
		cout<<app_c<<"\t"<<ex_c<<"\n";
		f=f+1;
	}
	
	
}
