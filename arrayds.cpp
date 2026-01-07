#include<iostream>
using namespace std;
int main()
{
    int num[10],n,choice,pos,value,key;
    cout<<"Enter no. of numbers";
    cin>>n;

    cout<<"Enter numbers";
    for(int i=0;i<n;i++)
     cin>>num[i];

     do
     {
        cout<<"\nOPREATIONS";
        cout<<"\n1.Traverse";
        cout<<"\n2.Insert";
        cout<<"\n3.Update";
        cout<<"\n4.Delete";
        cout<<"\n5.Search";
        cout<<"\n6.Exit";
        cout<<"\nEnter choice";
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"Marks:";
            for(int i=0;i<n;i++)
             cout<<num[i]<<" ";
            break;

            case 2:
            cout<<"Enter position and value: ";
            cin>>pos>>value;
            for(int i=n;i>pos;i--)
             num[i]=num[i-1];

            num[pos] = value;
            n++;
            cout << "Value inserted.";
            break;

            case 3:   
            cout<<"Enter position and new value: ";
            cin>>pos>>value;
            num[pos]=value;
            cout<<"Value updated.";
            break;

            case 4:   
            cout<<"Enter position to delete: ";
            cin>>pos;

            for(int i = pos; i < n - 1; i++)
             num[i]=num[i+1];
            n--;
            cout << "value deleted.";
            break;

            case 5:   
            cout<< "Enter number to search: ";
            cin>> key;

            for(int i=0;i<n;i++)
            {
             if(num[i] == key)
              {
                cout << "Number found at index " << i;
                break;
              }
                if(i == n - 1)
                cout << "Number not found.";
            }
            break;

            case 6:
            cout<<"Program exited.";
            break;

            default:
            cout<<"Invalid choice.";
        }
    } 
    while(choice != 6);
    return 0;
 
        }