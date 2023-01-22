#include<iostream>
using namespace std;
string result(int number);
main()
 {
    int number;
    string output;
    cout<< "Enter number: ";
    cin>>number;
    output = result(number);
    cout<<output;
 }
 string result(int number)
  {
    string calculatedoutput;
    if(number % 2 == 0)
     {
        calculatedoutput = "Even";
     }
    if(number % 2 != 0)
     {
        calculatedoutput = "Odd";
     }
     return calculatedoutput;

  }
  
