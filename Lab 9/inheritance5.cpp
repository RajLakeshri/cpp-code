#include<iostream>
using namespace std;

class A
{
	int c;
	public:
		int a;
	protected:
		int b;
	public:
		void disp()
		{
			cout<<"in disp of A"<<endl;
		}
};

class B :private A
{
	public:
		void show()
		{
			cout<<a<<b<<endl;
		}
};

class C :public B
{
//	public
//	void show()
//	{
//	cout<<a<<b<<endl;
//	}
};
int main()
{
	B bobj;
	bobj.show();
	C cobj;
	cobj.show();
}
