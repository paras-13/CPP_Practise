#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        cin >> arr[i];
        int count = 0;
        if(arr[0] == n && arr[n-1] == 1)
        {
            int var = n-3;
            count = n+var;
        }
        else if(arr[0] == 1 && arr[n-1] == n)
        count = 0;
        
        
        cout << count << endl;
    }
	return 0;
}
