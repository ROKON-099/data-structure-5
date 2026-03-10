#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array:";
    cin>>n;
    cout << "Enter " <<n << " number of array:";
    int arr[n] ,rev[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i<n; i++)
    {
        rev[i]=arr[n-1-i];
    }
    cout << "Reverse array is : ";
    for (int i=0; i<n; i++)
    {
        cout << rev[i] << " "<<endl;
    }





}

