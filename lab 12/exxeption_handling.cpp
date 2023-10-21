#include<iostream>
using namespace std;
int div(int a,int b);
int main()
{
	int a,b;
	float r;
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	try{
		r=div(a,b);
		cout<<"result is "<<r<<endl;
	}
	catch(const char *a)
	{
		cout<<a<<endl;
	}

}
int div(int a,int b)
{
	if(b==0)
	{
		throw "dividing by 0 not allowed";
	}
	return a/b;
}

