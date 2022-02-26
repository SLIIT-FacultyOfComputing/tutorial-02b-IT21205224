/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
using namespace std;
int main()
{
  int no;//asign variables
  long fac;

  cout<<"Enter a number : ";//user input
  cin>>no;

  fac = 1;
  for(int r=no; r >=1; r--){//repeatition
    fac = fac *r;
  }
  cout<<"factorial of " << no << " is"<< fac ; //display factorial of a number
  return 0;
}
