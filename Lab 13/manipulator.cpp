#include <iostream>     // std::cout, std::fixed  
#include <iomanip>      // std::setprecision  
using namespace std;  
  
int main () {  
  double f =3.14159;
  float n1=23.256f;
  float n2=n1/5;
    
  cout << setprecision(4) << f << '\n';  
  cout << setprecision(2) << f << '\n';  
  cout << fixed;  
  cout << setprecision(5) << f << '\n';  
  cout << setprecision(9) << f << '\n';  
cout<<n2<<endl;
cout<<"2 digit pricison"<<endl;
cout<<setprecision(2)<<n2;

  return 0;  
}
