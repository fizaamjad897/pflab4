#include<iostream>
using namespace std;
void add();
void product();
main()
{
  add();
  product();
  add();
  product();
}
 void add()
{
  int num1;
  int num2;
  int sum1;
  cout<< "Enter first number ";
  cin>>num1;
  cout<< "Enter second number ";
  cin>>num2;
  sum1= num1+num2;
  cout<< "Sum is equal to " <<sum1 <<endl;

}
 void product()
{
  int num3;
  int num4;
  int multiply;
  cout<< "Enter first number ";
  cin>>num3;
  cout<< "Enter second number ";
  cin>>num4;
  multiply= num3 * num4;
  cout<< "The product is "<<multiply;
}