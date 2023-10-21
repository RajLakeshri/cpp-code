#include<iostream> 
using namespace std; 
class A {
   public:             
   class B {
      private:
      int num;
      public:
      void setdata(int n) {
         num = n;
      }
      void getdata() {
         cout<<"The number is "<<num;
      }
   };
};
int main() {
   cout<<"inner class "<< endl;
   A :: B obj;
   obj.setdata(25);
   obj.getdata();
   return 0;
}
