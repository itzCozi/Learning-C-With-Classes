// Made for Linux
// #include<windows.h> for windows PC

// So that strings dont have to be arrays of characters
#include <string>
// For output clearing in linux
#include <stdlib.h>
// For sleep fuc
#include<unistd.h>
// Input Output stream
#include <iostream>

// Create all integer variables
int z, z1, x, y;
int menuOption;

// Define the menu options
const std::string menuText =
  "1. Addition \n"
  "2. Subtraction \n"
  "3. Divison \n"
  "4. Multiplication \n"
  "5. Exit\n\n";

// Define the add function
void add(int x, int y) {
  z = x + y;
  std::cout << z << "\n";
}

// Define the sub function
void sub(int x, int y) {
  z =  x - y;
  z1 = y - x;
  std::cout << z << "\n" << z1 << "\n";
}

// Define the divide function
void divide(int x, int y) {
  z = x / y;
  z1 = y / x;
  std::cout << z << "\n" << z1 << "\n";
}

// Define the multiply function
void multiply(int x, int y) {
  z = x * y;
  std::cout << z << "\n";
}

int main() {
  // Start with a blank console
  system("clear");

  // Display menu and get user option
  std::cout << "----- Simple Calculator -----\n\n";
  std::cout << menuText;
  // Get users option
  std::cin >> menuOption;

  // If user picked 1 this block is ran
  if (menuOption==1) {
    system("clear");
    std::cout << "----- Addition -----\n\n";
    std::cout << "Enter first number ";
    std::cin >> x;
    std::cout << "Enter second number ";
    std::cin >> y;
    std::cout << "\n";

    // Call to add function
    add(x,y);
    sleep(2);
    main();}

  // If user picked 2 this block is ran
  if (menuOption==2) {
    system("clear");
    std::cout << "----- Subtraction -----\n\n";
    std::cout << "Enter first number ";
    std::cin >> x;
    std::cout << "Enter second number ";
    std::cin >> y;
    std::cout << "\n";

    // Call to sub function
    sub(x,y);
    sleep(2);
    main();}

  // If user picked 3 this block is ran
  if (menuOption==3) {
    system("clear");
    std::cout << "----- Divison -----\n\n";
    std::cout << "Enter first number ";
    std::cin >> x;
    std::cout << "Enter second number ";
    std::cin >> y;
    std::cout << "\n";

    // Call to divide function
    divide(x,y);
    sleep(2);
    main();}

  // If user picked 4 this block is ran
  if (menuOption==4) {
    system("clear");
    std::cout << "----- Multiplication -----\n\n";
    std::cout << "Enter first number ";
    std::cin >> x;
    std::cout << "Enter second number ";
    std::cin >> y;
    std::cout << "\n";

    // Call to multiply function
    multiply(x,y);
    sleep(2);
    main();}

  // If user picked 5 this block is ran
  if (menuOption==5) {
    system("clear");
    std::string quitOpt;
    std::cout << "Would you like to quit the program? ";
    std::cin >> quitOpt;
    if (quitOpt=="yes") {
      std::cout << "Exiting the application";
      sleep(2);
      return 0;}
    if (quitOpt=="y") {
      std::cout << "Exiting the application";
      sleep(2);
      return 0;}
    if (quitOpt=="no") {
      std::cout << "Heading to application";
      sleep(2);
      main();}
    if (quitOpt=="n") {
      std::cout << "Heading to application";
      sleep(2);
      main();}
    else {
      std::cout << "Invaild Input";
      sleep(2);
      main();}
  }
  else {
    std::cout << "Invaild Input\n";
    sleep(2);
    main();}
}
