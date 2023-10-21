//Date class program

#include<iostream>
using namespace std;
class Date
{
	int dd,mm,yy;
	public:
	void disp();
	void setDD(int x);
	int getDD();
	void setMM(int y)
	{
		mm=y;
	}
	int getMM()
	{
		return mm;
	}
	void setYY(int z)
	{
		yy=z;
	}
	int getYY()
	{
		return yy;
	}
	void accept()
	{
	 cout<<"enter dd mm yy \n";
	 cin>>dd>>mm>>yy;
	}
	Date(int dd,int mm,int yy)
	{
		this->dd=dd;
		this->mm=mm;
		this->yy=yy;
	}
	Date()
	{
		
	}
	Date operator+(Date &a)
	{
		Date temp;
		temp.dd=this->dd+a.dd;
		temp.mm=this->mm+5;
		temp.yy=this->yy+7;
		return temp;
	}
	
	
};
void Date:: disp()
{
	cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yy;
}
void Date:: setDD(int x)
{
  dd=x;
}
int Date::getDD()
{
	return dd;
}
int main()
{
	Date D1;
	Date D2;
	D1.accept();
	D2.accept();
	Date D3=D1+D2;
	D3.disp();
	
//	D.disp();
//	D.setDD(10);
//	cout<<"\nmodified dd is "<<D.getDD()<<"\n";
//	D.setMM(12);
//	cout<<"\nmodified mm is "<<D.getMM()<<"\n";
//	D.setYY(2024);
//	cout<<"\nmodified yy is "<<D.getYY()<<"\n";
//	cout<<"sizeof D is "<<sizeof(D)<<" bytes";
//	Date d(12,01,2001);
//	d.disp();
	
}
