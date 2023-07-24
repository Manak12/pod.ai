#include <iostream>
using namespace std;
 // Wrong code
   void f(){
    cout <<"Hi";
   }
int main(){
  int a =10;
  void f();
  a = f();
  cout << a;
return 0;
}