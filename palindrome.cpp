//Palindrome using two pointer approach
#include<iostream>
using namespace std;
int main()
{
    int flag = 0;
    string str;
    cout<<"Enter a string to check for palindrome :- ";
    cin>>str;
    for(int i=0,j=str.length()-1; i<j,j>i; i++,j--)
    {
        if(str[i] == str[j]) flag = 1;
        else flag = 0;
    }
    if (flag ==1) cout << "It is Palindrome"<<endl;
    else cout << "It is not a Palindrome"<<endl;
}
