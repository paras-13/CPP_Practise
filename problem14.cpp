#include<iostream>
using namespace std;
int main()
{
    int arr[] = {18, 34, 19, 15, 300, 50};
    int sum = 0, size = sizeof(arr)/sizeof(arr[0]);
    int max = 0, sec_max = 0;
    for (int i=0; i<size; i++)
    {
        if(arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if(sec_max < arr[i] && sec_max < max)
        sec_max = arr[i];
    }
    cout << "Largest :- " << max << endl << "Second largest :- " << sec_max;
}
