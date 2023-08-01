// To print a table of desired number
#include<iostream>
using namespace std;
void table(int x)
{
    for(int i=1; i<=10; i++)
    {
        cout << x << " * " << i << " = " << x*i << endl;
    }
}
int main()
{
    int x;
    cout<<"Enter a number whose table you want :- ";
    cin >> x;
    table(x);
    return 0;

}