#include<iostream>
using namespace std;
#include<string.h>

class demo
{
	int len;
	char *ptr;
	public:
		demo(int len,char *sptr)
		{
			this->len=len;
			ptr=new char[(this->len)+1];
			strcpy(this->ptr,sptr);
		}
		void disp()
		{
			cout<<"name is "<<this->ptr<<"len is "<<len<<endl;
		}
		~ demo()
		{
			cout<<"destrctor is called"<<endl;
			if(ptr)
			delete [] ptr;
			ptr=NULL;
			
			
		}
		
};
int main()
{
	demo d1(6,"vishal");
	d1.disp();
	demo d2(d1);
    
	d2.disp();
	d2.~demo();
	d1.disp();
}
