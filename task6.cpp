#include<iostream>
using namespace std;
int result(int number1, int number2);
main()
 {
    int number1, number2, output;
    cout<< "Enter number1: ";
    cin>>number1;
    cout<< "Enter number2: ";
    cin>>number2;
    output = result(number1, number2);
    cout<<output;
 }
 int result(int number1, int number2)
  {
    int calculatedoutput;
    if(number1 > number2)
     {
        calculatedoutput = number1;
     }
    else
     {
        calculatedoutput = number2;
     }
     return calculatedoutput;

  }
  
