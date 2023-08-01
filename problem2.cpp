#include<bits/stdc++.h>
using namespace std;
// include --> prepocessor di
// Using user input
int main()
{

    string name;
    int age, roll;
    cout<<"Please enter your age :- ";
    cin>>age;
    cout<<"Enter you name";
    cin>>name;
    cout<<"Enter your roll_no";
    cin>>roll;

    cout << "Age :- "<< age << endl << "Name :- "<< name <<endl << "Roll_No :- " << roll;

    getline(cin, name);    // --> Now we can print the name later as well, previously it gives an error if we print age before name
    age = 89;
    cout << "Age :- "<<age << endl << "Name :-" << name;
}