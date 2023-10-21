#include<iostream>
using namespace std;
int main()
{
	int fact=1,i=1;
	int n;
	cout<<"enter number "<<endl;
	cin>>n;
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	cout<<"factorial of no is : "<<fact<<endl;
	
}
