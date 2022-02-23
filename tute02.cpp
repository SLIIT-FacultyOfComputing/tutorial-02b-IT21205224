/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

##include<iostream>
using namespacing std;
int main()
{
  double salary,netsalary;
  int etype,otHrs,otRate;
  cout<<"Enter Employee type:";
  cin>>etype;
  cout<<"Enter OTHrs:";
  cin>>otHrs;
  switch(etype)
    {
      case1:
      otRate=1000;
      break;
      otRate=1500;
      break;
      default:
      otRate=1700;
      break;
    }
  netSalary=salary+otHours*otRate;
  cout<<"Net Sallary is"<<Netsallary;
}