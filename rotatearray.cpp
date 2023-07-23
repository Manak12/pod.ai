#include <iostream>
using namespace std;

void rotatearray(int arr[], int n)
{

    int start = 0;
    int end = n - 1;
     while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[6] = {10, 2, -2, 45, 34, 11};
    int arr2[3] = {12, 14, 99};
    cout << "The even size array:";
    rotatearray(arr1, 6);
    printarray(arr1, 6);
    cout << endl;
    cout << "The odd size array:";
    rotatearray(arr2, 3);
    printarray(arr2, 3);

    return 0;
}