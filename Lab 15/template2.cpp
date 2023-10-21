#include<iostream>
using namespace std;
template <class T,class T1>
void add(T a,T1 b)
{
cout<< a+b<<endl;
}

;
int main()
{
int a=10,b=20;
float c=30.1f,d=2.56f;
add(a,c);
add(c,b);
}
