#include<iostream>
using namespace std;
void add(int n1, int n2);
void sub(int n1, int n2);
void divide(int n1, int n2);
void multiply(int n1, int n2);
main()
 {
    int n1, n2;
    char op;
    cout<< "Enter first number: ";
    cin>>n1;
    cout<< "Enter Second Number: ";
    cin>>n2;
    cout<< "Enter an operator(+, *, /, -): ";
    cin>>op;
    if(op == '+')
      {
        add(n1, n2);
      }
    if(op =='-')
     {
        sub(n1, n2);
     }
    if(op == '/')
     {
        divide(n1, n2);
     }
    if(op == '*')
     {
        multiply(n1, n2);
     }     
 }
void add(int n1, int n2)
 {
    int sum;
    sum = n1+n2;
    cout<<sum;
 }
void sub(int n1, int n2)
 {
    int minus;
    minus= n1-n2;
    cout<<minus;
 }
void divide(int n1, int n2)
 {
    int div;
    div = n1 / n2;
    cout<<div;
 }
void multiply(int n1, int n2)
  {
    int mul;
    mul = n1 * n2;
    cout<<mul;
  }