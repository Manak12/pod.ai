#include <iostream>
using namespace std;
  class A{
    int a;
    public:
    A(){
        cout<<"A's constructor called"<< endl;

    }
  };
  class B{
    static A a;
    public:
    B(){
        cout<< "B's constructor called" << endl;

    }
    static A get(){
        return a;
    }
  };
  A B::a;
int main(){
    B b;
    A a1 = b.get();
    A a2 = b.get();
    A a3 = b.get();
return 0;
}