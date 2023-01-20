// MADE FOR LINUX #include<windows.h> for windows

// So that strings dont have to be arrays of characters
#include <string>
// For output clearing in linux
#include <stdlib.h>
// For sleep fuc in linux
#include <unistd.h>
// Input Output stream
#include <iostream>

int main() {
	// Declare pointer variable
	int* ptr = new int;
	
	// Set ptr to 5 in heap
	*ptr = 5;

  // Make the code pretty with dividers
	std::cout << "-------------------\n";
	std::cout << "Print the value of ptr\n";
	std::cout << "-------------------\n";

  // Print the value of ptr
	std::cout << *ptr << "\n";
	std::cout << "\n";

	// Make the code pretty with dividers
  std::cout << "-------------------\n";
	std::cout << "Deleting ptr\n";
	std::cout << "-------------------\n";

  // Delete ptr because it served it's use
	delete ptr;
	
  /* Deleting a pointer creates a dangling pointer which is 
	bad practice to solve this issue we temporarily assign ptr to NULL */  ptr = NULL;
	std::cout << "\n";

	// Make the code pretty with dividers
  std::cout << "-------------------\n";
	std::cout << "Reassigning ptr\n";
	std::cout << "-------------------\n";
  
	// Reassign the value of pointer ptr
  ptr = new int(61);
	std::cout << "\n";

	// Make the code pretty with dividers
  std::cout << "-------------------\n";
	std::cout << "Print the value of reassigned ptr\n";
	std::cout << "-------------------\n";
  
	// Print the value of ptr
  std::cout << *ptr << "\n";
	sleep(4);
}
