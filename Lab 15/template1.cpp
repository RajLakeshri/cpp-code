#include<iostream>
using namespace std;
template <class T>
void add(T a,T b)
{
cout<< a+b<<endl;
}

;
int main()
{
int a=10,b=20;
float c=30.1f,d=2.56f;
add(a,b);
add(c,d);
}
