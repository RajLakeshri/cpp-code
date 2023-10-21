#include<iostream>
#include<string.h>
using namespace std;
class string1
{
	int len;
	char* ptr;
	public:
		string1(char *);
		void show();
		string1(char,int);
		string1(int);
		string1();
		
};
string1::string1(char *ptr1)
{
	int len;
	len=strlen(ptr1);
	this->len=len;
	ptr=new char[this->len + 1];
	strcpy(this->ptr,ptr1);
}

void string1::show()
{
	cout<<"string is "<<ptr<<endl;
	cout<<"length is "<<len<<endl;
}

string1::string1(char ch,int len)
{
	int i;
	this->len=len;
	ptr=new char[this->len+1];
	for(i=0;i<this->len;i++)
	{
		ptr[i]=ch;
		
	}
	
}

string1::string1(int len)
{
	char ch[this->len+1];
	this->len=len;
	ptr=new char[this->len+1];
	cout<<"enter string"<<endl;
	cin>>ch;
	strcpy(ptr,ch);
	
}

string1::string1()
{
	int len;
	char ch[this->len+1];
	cout<<"enter length "<<endl;
	cin>>len;
	this->len=len;
	cout<<"enter string "<<endl;
	cin>>ch;
	ptr=new char[this->len+1];
	strcpy(ptr,ch);
	
}

int main()
{
	string1 s1("cdac");
	s1.show();
	string1 s2('*',50);
	s2.show();
	string1 s3(6);
	s3.show();
	string1 s4;
	s4.show();
}
