#include<iostream>
using namespace std ;
int main()
{
    int a[20];
    int n ,key , flag=0;

    cout << "Enter number of elements: ";
    cin >> n;
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to search";
    cin>>key;
    
    for(int i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            cout<<"Element found at position "<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0)
        {
            cout<<"Element not found at any position";
        }
    return 0;
}