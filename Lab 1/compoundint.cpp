
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    double prin , rate , time;
	cout<<"enter principle,rate and time"<<endl;
	cin>>prin>>rate>>time;
    double A = prin * (pow((1 + rate / 100), time));
      double CI = A- prin;
  
    cout << "Compound interest for "<<time<< " year is " << CI<<endl;
  
    return 0;
}
