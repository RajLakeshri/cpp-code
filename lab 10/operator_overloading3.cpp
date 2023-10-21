#include<iostream>
using namespace std;
#include<string.h>
class String
{
	int len;
	char*ptr;
	public:
		String(char* sptr)
		{
			len=strlen(sptr);
			ptr=new char[len+1];
			strcpy(ptr,sptr);
		}	
		
		String operator=(String& s)
		{
			cout<<"assign opera is called\n";
			len=s.len;
			delete[] ptr;
			ptr=new char[len+1];
			strcpy(ptr,s.ptr);
			return (*this);
		}
		
		void display()
		{
			cout<<"length is "<<len<<endl;
			cout<<"string is "<<ptr<<endl;
		}
};

int main()
{
	String s1("ram");
	String s2("sam");
	
	s2=s1;
	s2.display();
}
