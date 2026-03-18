#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
Node* top =NULL;
void push(int value)
{
    Node* newNode = new Node();
    newNode->data=value;
    newNode->next=top;
    top=newNode;
    cout<<value<<"\nPushed into stack."<<endl;
}
void pop()
{
    if (top==NULL)
    {
        cout<<"Stack underflow!"<<endl;
        return;
    }
    Node* temp=top;
    cout<<top->data<<" Popped from stack."<<endl;
    top=top->next;
    delete temp;
}
void display()
{
    if (top==NULL)
    {
        cout<<"Stack is empty!"<<endl;
        return;
    }
    Node* temp=top;
    cout<<"Stack elements are: ";
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
                cout<<"Invalid choice!"<<endl;
        }
    } 
    while (choice!=4);
    return 0;
}