#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int n,key,low=0,high,mid;
    int flag =0;
    
    cout << "Enter number of elements: ";
    cin >> n;
    cout<<"Enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter element to search ";
    cin>>key;

    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            cout<<"Element found at position "<<mid+1;
            flag=1;
            break;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==0)
    {
        cout<<"Element not found at any position";
    }
    return 0;
}