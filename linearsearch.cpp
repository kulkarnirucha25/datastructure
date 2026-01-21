#include<iostream>
using namespace std ;
int main()
{
    int a[10]={10,4,35,9,34,55};
    int key , flag=0;

    cout<<"Enter element to search";
    cin>>key;
    
    for(int i=0;i<6;i++)
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