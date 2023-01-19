// So that strings dont have to be arrays of characters
#include <string>
// Input Output stream
#include <iostream>

class luckyNumbers {
  public:
    // Number in int form
    int myNumber;
    // Number in string form
    std::string writtenNumber;
};

int main() {
  // Create object from luckNumbers class
  luckyNumbers my_lucky_number; 

  // Set object values
  my_lucky_number.myNumber = 493;
  my_lucky_number.writtenNumber = "Four Hundrend Ninety Three";

  // Print the objects values
  std::cout << my_lucky_number.myNumber << "\n";
  std::cout << my_lucky_number.writtenNumber;
  return 0;
}
