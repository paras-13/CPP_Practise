#include <iostream>
using namespace std;

int Small(int* arr, int n)
{
    int min=arr[0];
    for(int j=0; j<n; j++)
    {
        if (arr[j] < min)
        min = arr[j];
    }
    return min;
}
void print(int* arr, int n, )
int main()
{
    int t, n, flag = 1;
    cin >> t;
    while(t--)
    {
        cin>> n;
        int arr[n];
        for(int i=0; i<n;i++)
        cin >> arr[i];
        int small = Small(arr, n);
        for(int j=0; j<n; j++)
        {
            if (arr[j] %small != 0)
            {
                flag = 0;
                break;
            }
        }
        
        print(arr, n, flag);
    }
	return 0;
}
