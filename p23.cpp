#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " Enter the size of an array:";
    cin >>n;
    int arr[n];
    cout << "Enter" <<n << " Number of array:";
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
   int sum=0;
   int* ptr=arr;
    for (int i=0; i<n; i++)
    {
        sum += *(ptr + i);

    }
    cout << "Sum of all element is:" << sum << endl;








}
