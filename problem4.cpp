#include <iostream>
using namespace std;
int main()
{
    int size, ele;
    cout << "Enter array size";
    cin >> size;
    int arr[size];
    cout << "Enter array elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Printing array elements :- ";
    for(int j=0; j<size; j++)
    {
        cout << arr[j] << " ";
    }
}