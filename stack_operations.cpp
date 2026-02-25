#include<iostream>
using namespace std;
int stack[5];
int top=-1;
int maxSize=5;

void push (int value)
{
    if (top==maxSize-1)
    {
        cout<<"Stack overflow!"<<endl;
    }
    else
    {
        top++;
        stack[top]=value;
        cout<<value<<"\nPushed into stack."<<endl;
    }
}
void pop()
{
    if (top==-1)
    {
        cout<<"Stack underflow!"<<endl;
    }
    else
    {
        int value=stack[top];
        top--;
        cout<<value<<"Popped from stack."<<endl;
    }
}
void display()
{
    if (top==-1)
    {
        cout<<"Stack is empty!"<<endl;
    }
    else
    {
        cout<<"Stack elements: ";
        for (int i=top; i>=0; i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
} 
int main()
{
    int choice,value;
    do
    {
        cout<<"\nSTACK Menu :"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4.Exit"<<endl;

        cout<<"Enter choice:";
        cin>>choice;
        
        switch (choice)
        {
            case 1:
                cout<<"Enter value to push:";
                cin>>value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice! "<<endl;
        }
    }
    while(choice!=4);
    return 0;
}