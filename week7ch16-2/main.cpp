// This program demonstrates the use of object-oriented 
// exception handling. 
#include <iostream>
#include "IntRange.h"

int main()
{
   IntRange range(5, 10);
   int userValue;
    
   std::cout << "Enter a value in the range 5 - 10: ";
   try {
        userValue = range.getInput();
        std::cout << "You entered " << userValue << std::endl;
   } catch (IntRange::OutOfRange e) {
       std::cout << e.getUserValue() << " is out of range.\n";
   }
   std::cout << "End of the program.\n";
   return 0;
}