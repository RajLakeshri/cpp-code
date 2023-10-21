#include<iostream>
using namespace std;
void swap(int p, int q);
int main()
{
	int a,b;
	cout<<"enter two numbers to swap\n";
	cin>>a>>b;
	cout<<"nubers before swapping are "<<a<<" "<<b<<endl;
	swap(a,b);
}
void swap(int p, int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"nubers after swapping are "<<p<<" "<<q;
}
