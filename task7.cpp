#include<iostream>
using namespace std;
float payableamount(float amount, string day);
main()
 {
    string day;
    float amount, output;
    cout<< "Enter total purchase amount ";
    cin>>amount;
    cout<< "Enter day ";
    cin>>day;
    output = payableamount(amount, day);
    cout<<output;

 }
 float payableamount(float amount, string day)
  {
    float actualprice;
    actualprice = amount;
    if(day == "sunday")
     {
        actualprice = amount - (amount * 0.1);
     }
    return actualprice;
  }

 