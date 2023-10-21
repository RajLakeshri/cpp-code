#include<iostream>
using namespace std;
#include<string.h>
class demo
{
	int len;
	public:
	char *ptr;
	demo(char* sptr)
	{
		len =strlen(sptr);
		ptr =new char[len+1];
		strcpy(ptr,sptr);
	}
	~demo()
	{cout<<"dist is called"<<endl;
		if(ptr)
		delete[] ptr;
		ptr=NULL;
	}
	void disp()
	{
		cout<<"name is "<<ptr<<endl;
	}
};
int main()
{
	demo d1("vishal");
	d1.disp();
	{
	demo d2(d1);
	d2.disp();
	d2.~demo();
	}
	
     d1.disp(); 
}
