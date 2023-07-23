#include <iostream>
using namespace std;

   void printarr(int arr[] , int size){
       for (int i = 0; i < size; i++)
       {
        cout << arr[i] << endl;
       }
       
      
      cout << "Array is being printed " <<endl;
   }
int main()
{  
    //declare an array 

     int number[15];
     cout <<"Everythong is fine" <<endl;
    int arr[] = {0};
     cout << arr[0]  <<endl ;
       cout << "value at 9 index : " << arr[9] << endl;

       printarr(arr , 20 );

       int age[15]= {2,5,34,65};
       for ( int i = 0; i < 15; i++)
       {
        cout << age[i] << endl;
       }

       cout << age[15];

       char ch[3] = {'a','b','c'};
       cout << ch[0];
       

    return 0;
}