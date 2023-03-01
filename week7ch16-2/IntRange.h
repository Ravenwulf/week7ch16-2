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
  class OutOfLowerRange { 
  private: 
	  int userValue;
  public:
	  OutOfLowerRange(int u) { this->userValue = u; }
	  int getUserValue() {  return this->userValue; }
  };	 // Empty class declaration
  class OutOfUpperRange {
  private:
	  int userValue;
  public:
	  OutOfUpperRange(int u) { this->userValue = u; }
	  int getUserValue() { return this->userValue; }
  };
// Member functions
	IntRange(int low, int high) {
		lower = low;
		upper = high; 
	}
	int getInput() {
	  std::cin >> input;
	  if (input < lower)
	     throw OutOfLowerRange(input);
	  if (input > upper)
		  throw OutOfUpperRange(input);
	  return input;
	}
};
#endif