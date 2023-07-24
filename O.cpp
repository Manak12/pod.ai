#include <iostream>
using namespace std;
class A
{
    int id;
    static int count;

public:
    A()
    {
        count++;
        id = count;
        cout << "Constructor for id" << id << endl;
    }
    ~A()
    {
        cout << "Destructor for id"   << id << endl;
    }
};

int A::count = 0;
int main()
{
    A a[3];
    return 0;
}
