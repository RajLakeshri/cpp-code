#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
		date()
		{this->dd=10;
		this->mm=06;
		this->yy=2024;
			cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		void show()
		{
			cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
		
};
int main()
{
	date d1;
	date d2(d1);
	d2.show();
}
