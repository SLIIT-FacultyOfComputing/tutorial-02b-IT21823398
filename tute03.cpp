/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>

int main()
{
  int no;                      //declare variables
  long fac;

  std::cout << "Enter No : ";        //input number
  std::cin >> no;

  fac = 1;                         //initializing fac variable
  
  for(int r = no ; r >= 1 ; r--) {
      fac = fac * r;
  }

  std::cout << "\n";

  std::cout << "Factorial of " << no << " is " << fac;
  
  return 0;
  
}
