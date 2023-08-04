// Online C++ compiler to run C++ program online
// Finding missing element without sorting
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]  = {1, 3, 4, 5, 2, 7};
    int flag = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]  == arr[i] +1)
            {
                flag = 1;
                break;
            }
            else flag = 0;
        }
        if (flag == 0)
        {
            cout << arr[i] + 1;
            break;
        }
    }
    return 0;
}
