// Made for Linux
// #include<windows.h> for windows PC

// So that strings dont have to be arrays of characters
#include <string>
// For output clearing in linux
#include <stdlib.h>
// For sleep fuc
#include <unistd.h>
// Input Output stream
#include <iostream>

int i = 0;

int main() {
  while (i < 1) {

    // Creates 3 variables
    int first_number, second_number, sum;

    std::cout << "Enter first number ";
    std::cin >> first_number;
    std::cout << "Enter second number ";
    std::cin >> second_number;

    // A pointer var that holds the mem address of first_number
    int* ptr_first = &first_number; 
    // A pointer var that holds the mem address of the second_number
    int* ptr_second = &second_number;

    if (second_number+first_number==0) {
      std::cout << "Numbers must be greater than 0\n";
      sleep(2);
      return 0;
    }
  
    // sum of two numbers in stored in variable sumOfTwoNumbers
    sum = first_number + second_number;

    std::cout << "Your new number is " << sum << "\n\n";

    // Wait for 1 second
    sleep(1);
    
    // prints the mem address of both the numbers
    std::cout << ptr_first << "\n";
    std::cout << ptr_second << "\n";
    
    // Wait for 2 seconds
    sleep(2);
    
    // Clear console output
    system("clear");

  }
  return 0;
}
