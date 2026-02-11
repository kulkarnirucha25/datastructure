#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void merge(int arr[],int left,int mid,int right)
{
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1],R[n2];

    for(i=0;i<n1;i++)
      L[i]=arr[left+i];
    for(j=0;j<n2;j++)
      R[j]=arr[mid+1+j];
   
    i=0;
    j=0;
    k=left;
    
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
           arr[k++]=L[i++];
        else 
            arr[k++]=R[j++];
    }
    while(i<n1)
      arr[k++]=L[i++];

    while(j<n2)
      arr[k++]=R[j++];
}
void mergesort(int arr[],int left,int right)
{
    if (left<right)
    {
        int mid=(left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }

}
void display(int arr[],int n)
{
    cout<<"Sorted array: ";
    for (int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }  
    cout<<endl;
}
int main()
{
    int n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Insertion Sort\n";
        cout << "2. Merge Sort\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                insertionsort(arr, n);
                display(arr, n);
                break;

            case 2:
                mergesort(arr, 0, n - 1);
                display(arr, n);
                break;

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 3);

    return 0;
}