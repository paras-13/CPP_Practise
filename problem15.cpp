// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
     // Write C++ code here
    int arr[] = {2, 3, 4, 3, 5, 3, 2, 4, 5, 2, 5,};
    int size = sizeof(arr)/sizeof(arr[0]);
    int flag = 1;
    int arr2[size];
     for(int i=0; i<size; i++)
        {
        for (int k=0; k<size; k++)
        {
            if(arr[i] == arr2[k]){
                flag = 0;
                 break;}
        }
        if(flag == 1)
        {
                int count = 1;
                for(int j=i+1; j<size; j++)
                {
                if (arr[i] == arr[j]) count++;
                }
                if (count %2 != 0) cout<< arr[i] << " ";
                else arr2[i] = arr[i];
         }
    }
return 0;
}
