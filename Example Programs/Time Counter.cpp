// Counts for a user defined amout of seconds and then prints user defined text

// So that strings dont have to be arrays of characters
#include <string>
// For output clearing in linux
#include <stdlib.h>
// For sleep fuc
#include<unistd.h>
// Input Output stream
#include <iostream>

int main() {
  
    // Clear console output
    system("clear");

    // Create a int variable for time until done
    int timeTill = 0;
    // Create a string variable for the finished message
    std::string finMsg;
    
    std::cout << "_____ Time Counter _____\n\n";
    std::cout << "How many seconds: ";
    // Set timeTill variable to user input
    std::cin >> timeTill;
    std::cout << "Finished message: ";
    // Set finMsg variable to user input
    std::cin >> finMsg;
    std::cout << "\n";

    int i = 1;
  
    while (i <= timeTill) {

      // Check for finish
      if (timeTill == i) {
        // Print last second log
        std::cout << "Second: " << i << "\n";
        // Print the finish message
        std::cout << finMsg << "\n";
        sleep(2); 
        return 0;}

      // If the timeTill is not meant run this block
      else if (i < timeTill) {
        // Print second number then wait a second then add 1 to i
        std::cout << "Second: " << i << "\n";
        sleep(1);
        i++; }
  }
}
