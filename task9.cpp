#include<iostream>
using namespace std;
void name(string my_name);
main()
 {
    string my_name;
    cout<< "Enter your name ";
    cin>>my_name;
    name(my_name);
 }
 void name(string my_name)
{
 while(true)
     {
        cout<<my_name;
     }
}