#include<iostream>
using namespace std;
int main()
{
	int base,exponent;
	cout<<"enter base and exponent \n";
	cin>>base>>exponent;
	int result=1;
	for(int i=1;i<=exponent;i++)
	{
		
	result=result*base;
	}
	cout<<"result is "<<result;
}
