/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std;
long fc(int no);
long ncr(int n,int r);

int main() {
  int n,r;
  cout<<"enter value n:";
  cin>>n;
  cout<<"enter value r:";
  cin>>r;
  cout<<"ncr=";
  cout<<ncr(n,r);

}
long fc(int no)
{
  long fc=1;
  for(int r=no;r>=1;r--)
  {
    fc=fc*r;
  }
  return fc;
}
long ncr(int n,int r)
{
  long ncr=fc(n)/fc(r)*fc(n-r);
  return ncr;
}