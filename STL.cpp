#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> a(5,1);
    vector<int> v;
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(33231);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(2343);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(254);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(423);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;

    cout <<"Element at 2nd index " <<v.at(2)<<endl;
    return 0;
    cout <<"Front: " <<v.front() <<endl;
    cout <<"back: " <<v.back() <<endl;


    cout <<"before pop "<<endl;
    for(int i:v){
        cout<<i <<" ";

    }cout <<endl;

    v.pop_back();

    cout <<"before clear size " <<v.size() <<endl;
    v.clear();
    cout<<"After clearing size "<<v.size() <<endl;



}