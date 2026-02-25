#include <iostream>
using namespace std;

int main()
{
    int size, n, key, index;

    cout << "Enter hash table size: ";
    cin >> size;

    int hashTable[size];

    for(int i = 0; i < size; i++)
    {
        hashTable[i] = -1;
    }

    cout << "Enter number of keys: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter key: ";
        cin >> key;

        index = key % size; 

        hashTable[index] = key;
    }

    cout << "\nHash Table:\n";

    for(int i = 0; i < size; i++)
    {
        cout << i << " -> ";

        if(hashTable[i] == -1)
            cout << "Empty";
        else
            cout << hashTable[i];

        cout << endl;
    }

    return 0;
}