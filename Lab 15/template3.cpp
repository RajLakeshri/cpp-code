#include<iostream>
using namespace std;
template <class X>
class demo
{
	X a;
	X b;
	public:
		void add(X a, X b)
		{
			cout<<"addtion is "<<a+b<<endl;
		}
};
int main()
{
	
	demo <float> d1;
	d1.add(10.2,20.2);
}
