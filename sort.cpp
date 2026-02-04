#include<iostream>
using namespace std;
int main()
{
    int n,choice ;
    int a [50];

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements: \n";
    for(int i=0; i<n ;i++)
    {
        cin>>a[i];
    }

    cout << "\nChoose sorting method:";
    cout << "\n1. Bubble Sort";
    cout << "\n2. Selection Sort";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice==1)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp =a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        cout<<"\n Sorted array using bubble sort\n";
    }
    else if(choice==2)
    {
        for (int i =0;i<n-1;i++)
        {
            int min =i;
            for(int j =i+1;j<n;j++)
            {
                if(a[j]<a[min])
                {
                    min=j;
                }
            }
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
        cout<<"\n Sorted array using Swlection sort\n";
    }
    else
    {
        cout<<"\n Invalid choice!";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}