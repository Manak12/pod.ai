#include <iostream>
using namespace std;
  // Right code
    int fun1(int n){
        int i, j ,k , p , q =0;
        for(i=1; i<n ; ++i){
            p=0;
            for(j=n; j>1 ; j =j/2)
            ++p;
            for(k=1;k<p; k=k*2)
            ++q;
        }
        return q;
    }
int main(){
 //cout <<main;
    
    cout << fun1(5);
return 0;
}