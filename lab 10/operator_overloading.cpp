#include<iostream>
using namespace std;
class complex
{
	int real, imag;
	public:
	complex()
	{
		real=0;
		imag=0;
	}
	complex(int a,int b)
	{
		real=a;
		imag=b;
	}
	void disp()
	{if(imag>0)
		cout<<"complex number is "<<real<<"+"<<imag<<"i"<<endl;
		else
		cout<<"complex number is "<<real<<imag<<"i"<<endl;
	}
	complex operator+(complex &d)
	{complex temp;
		temp.real=this->real+d.real;
		temp.imag=this->imag+d.imag;
		return temp;
	}
	complex operator-(complex &e)
	{
		complex temp;
		temp.real=this->real-e.real;
		temp.imag=this->imag-e.imag;
		return temp;
	}
};

int main()
{
	complex c1(70,20);
	complex c2(40,-5);
	complex c3=c1+c2;//c1.opr+c2
	c3.disp();
	complex c4=c1-c2;
	c4.disp();
}
