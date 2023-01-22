#include<iostream>
using namespace std;
float calcsum(float n1, float n2);
main()
 {
    float n1, n2, sum;
    cout<< "Enter First Number: ";
    cin>>n1;
    cout<< "Enter Second Number: ";
    cin>>n2;
    sum = calcsum(n1, n2);
    cout<<sum;
 }
 float calcsum(float n1, float n2)
  {
    float finalsum;
    finalsum = n1 + n2;
    return finalsum;
  }


