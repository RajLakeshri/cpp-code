#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		Complex()
		{
			real=img=0;
		}
		Complex(int real,int img)
		{
			this->real=real;
			this->img=img;
		}
		
		void display()
		{
			if(img>0)
		cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
		else
		cout<<"complex number is "<<real<<img<<"i"<<endl;	
		}	
		
		Complex operator++()
		{
			++this->real;
			++this->img;
			return *this;
		}
		
		Complex operator++(int)
		{
			Complex temp=(*this);
			++this->real;
			++this->img;
			return temp;
		}
};

int main()
{
	Complex c1(10,15);
	Complex c2=++c1;
	c1.display();
}
