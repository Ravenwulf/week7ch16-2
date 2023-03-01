#ifndef INTRANGE_H
#define INTRANGE_H   

#include <iostream>

class IntRange
{
private:
  int input;	// For user input
  int lower;	// Lower limit of range
  int upper;	// Upper limit of range
public:
// Exception class
  class OutOfRange { 
  private: 
	  int userValue;
  public:
	  OutOfRange(int u) { this->userValue = u; }
	  int getUserValue() {  return this->userValue; }
  };	 // Empty class declaration
// Member functions
	IntRange(int low, int high) {
		lower = low;
		upper = high; 
	}
	int getInput() {
	  std::cin >> input;
	  if (input < lower || input > upper)
	     throw OutOfRange(input);
	  return input;
	}
};
#endif