/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include<iostream>
long factorial(int no);
long nCr(int n,int r);
int main()
{
  intn,r;
  std::cout<<"Enter a value for n";
  std::cin >> n;
  std::cout<<"Enter a value for r";
  std::cin >> r;
  std::cout<<"nCr = ";
  std::cout<< nCr(n,r);
  std::cout<< stf::endl;
  
}
long factorial(int no)
{
  int factorial=1;
  if(no==0)
    return factorial;
  else
    for(int i=1;i<=no;i++)
      {
        factorial=factorial*i;
      }
  return factorial;
}
long nCr(int n,int r)
{
  int nCr=factorial(n)/(factorial(r)*factorial(n-r));
  return nCr;
}
