#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array:";
    cin>>n;
    cout << "Enter " <<n << " number of array:";
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int largest=arr[0], smallest=arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i]> largest)
            largest=arr[i];
        if (arr[i]<smallest)
            smallest=arr[i];

    }
    cout << "Largest:" <<largest <<endl;
    cout << "Smallest:" <<smallest <<endl;



}
