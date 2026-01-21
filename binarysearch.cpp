#include<iostream>
using namespace std;
int main()
{
    int a[10]={5,10,15,25,26,35};
    int key,low=0,high=5,mid;
    int flag =0;

    cout<<"Enter element to search ";
    cin>>key;

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