#include <iostream>
using namespace std;
 

class B
 {
 	public:
virtual	void show()
 	{
 		cout<<"in show of b()";
	 }};
 

class D : public B
 {
 	public:
 	void show()
 	{
 		cout<<"in show of d ()";
	 }
};
 

int main()
{
    B* b = new D; 
    D* d = dynamic_cast<D*>(b); 
    if (d != NULL)
       d->show();
    else
        cout << "cannot cast B* to D*";
   
}
