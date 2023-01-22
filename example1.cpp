#include<iostream>
using namespace std;
void add(int num1,int num2);
void product(int num1,int num2);
   main()
{
   int num1;
   int num2;
   cout<< "Enter first number ";
   cin>>num1;
   cout<< "Enter second number ";
   cin>>num2;
   add(num1,num2);
   product(num1,num2);
}
   void add(int num1,int num2)
{
   int sum;
   sum= num1+num2;
   cout<< "The sum is equal to "<<sum<<endl;
}
   void product(int num1,int num2)
{
   int multiply;
   multiply=num1*num2;
   cout<< "The product is equal to "<<multiply;   
}