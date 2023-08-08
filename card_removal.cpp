#include <iostream>
using namespace std;

int main() {
	int t, n, temp, count, max = 0, num;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    max = 0;
	    for(int k=0; k<n; k++)
	    {
	        count = 0;
	        for(int l=k; l<n; l++)
	        {
	            if(arr[k] == arr[l])
	            count++;
	        }
	        if(count>max) 
	        {
	            max = count;
	            num = arr[k];
            }
	    }
	    count = 0;
	    for(int j=0; j<n; j++)
	    {
	        if(arr[j] != num)
	        count ++;
	    }
	    cout <<  count << endl;
	}
	return 0;
}
