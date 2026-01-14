#include<iostream>
using namespace std;

int main()
{
    int r1,c1,r2,c2;
    int A[5][5], B[5][5], add[5][5], sub[5][5], mul[5][5];

    cout<<"Enter rows and columns of first matrix: ";
    cin>>r1>>c1;

    cout<<"Enter rows and columns of second matrix: ";
    cin>>r2>>c2;

    cout<<"Enter elements of first matrix:\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Enter elements of second matrix:\n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>B[i][j];
        }
    }
    
    if(r1==r2 && c1==c2)
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                add[i][j]=A[i][j]+B[i][j];
                sub[i][j]=A[i][j]-B[i][j];
            }
        }

        cout<<"\nMatrix Addition:\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
                cout<<add[i][j]<<" ";
            cout<<endl;
        }

        cout<<"\nMatrix Subtraction:\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
                cout<<sub[i][j]<<" ";
            cout<<endl;
        }
    }
    else
    {
        cout<<"\nAddition and Subtraction not possible\n";
    }

    if(c1==r2)
    {
        for(int i=0;i<r1;i++)
            for(int j=0;j<c2;j++)
                mul[i][j]=0;

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                for(int k=0;k<c1;k++)
                {
                    mul[i][j]+=A[i][k]*B[k][j];
                }
            }
        }

        cout<<"\nMatrix Multiplication:\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
                cout<<mul[i][j]<<" ";
            cout<<endl;
        }
    }
    else
    {
        cout<<"\nMatrix multiplication not possible\n";
    }
    return 0;
}
