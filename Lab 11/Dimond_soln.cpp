#include<iostream>
using namespace std;
class A
{public:
	 A()
	{
		cout<<"inside default of A"<<endl;
	}
};
class B:virtual public A
{public:
		 B()
	{
		cout<<"inside default of B"<<endl;
	}
 } ;
 class C:virtual public A
{ public:
		 C()
	{
		cout<<"inside default of C"<<endl;
	}
 } ;
 class D:public C,public B
{ public:
		D()
	{
		cout<<"inside default of D"<<endl;
	}
 } ;
 int main()
 {
 	D d1;
 }
