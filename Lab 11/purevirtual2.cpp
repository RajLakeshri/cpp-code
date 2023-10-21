#include <iostream>
using namespace std;
class emp 
{
	 int id;
	 public:
	 	 emp();
	 	 emp(int);
	 	 void display();
	 	virtual int findsalary()=0;
	 	 
};
  emp::emp()
  {
  	 cout <<"in default emp\n";
  	 id = 0; 
  }
  emp::emp(int i)
  {
  	 cout <<"in parameterised of emp\n"<<endl;
  	 id=i;
  }
  void emp::display()
  {
  	 cout <<"id of employee is :"<<id<<endl;
  }
  
class wageemp: public emp
{
	int rate,hrs;
	public:
		wageemp();
		wageemp(int,int,int);
		void display();
	virtual	int findsalary()=0;
	
};

/* wageemp::wageemp()
 {
 	 cout <<"in default of wageemployee\n"<<endl;
 	 rate= 0;
	 hrs = 0;
 }*/
 wageemp::wageemp(int i,int r,int h):emp(i)
 {
 	cout <<"in parameterised of wageemployee\n";
 	rate = r;
 	hrs = h ;
 	
 }
 
 int wageemp::findsalary()
 {
 	return rate * hrs;
 }
 

 void wageemp::display()
 {
  emp::display();
  cout<<"rate is :"<<rate<<endl;
   cout<<"hours is :"<<hrs<<endl;
}

class salesmanager :public wageemp
{
	int sales, comm;
	public :
		salesmanager();
		salesmanager(int,int,int,int,int);
		void display();
        int findsalary();
		
};

 salesmanager::salesmanager()
 {
 	 cout <<"in default of salesmanager\n"<<endl;
 	 sales= 0;
	 comm = 0;
 }
 salesmanager::salesmanager(int i,int r,int h,int s, int c):wageemp(i,r,h)
 {
 	cout <<"in parameterised of salesmanager\n";
 	sales = s;
 	comm = c ;
 	
 }
 int salesmanager::findsalary()
 {
 	return (wageemp::findsalary()) + sales* comm;
 }
 void salesmanager::display()
 {
   wageemp::display();
   cout<<"sales is :"<<sales<<endl;
   cout<<"comm is :"<<comm<<endl;
}
 
 int main()
 {
//  emp*ptr=new emp(100);
//  cout<<"salary is "<< ptr->findsalary();
 
//	emp*ptr=new wageemp(100,10,500);
// cout<<"salary is "<< ptr->findsalary();
    
	emp*ptr=new salesmanager(100,10,500,2000,2);
    cout<<"salary is "<< ptr->findsalary();
}


