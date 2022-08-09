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

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  double salary, netSalary;         //declare variables
  int etype, otHrs, otRate;
  
  std::cout << "Enter Employee Type : ";
  std::cin >> etype;
  
  std::cout << "Enter Salary : ";
  std::cin >> salary;
  
  std::cout << "Enter OtHrs : ";
  std::cin >> otHrs;
   
  switch (etype) {                //determine the overtime rate paid
    case 1 :
      otRate = 1000;
      break;
    
    case 2 :
      otRate = 1500;
      break;
    
    default :
      otRate = 1700;
      
  }

  std::cout << "\n";

  netSalary = salary + (otHrs* otRate);       //calculate net salary

  std::cout << "Net Salary : ";  //display net salary
  
  std::cout << std::setw(10) << std::setiosflags(ios::fixed) << std::setprecision(2) << netSalary;      
  
  return 0;
  
}
