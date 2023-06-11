// Defining class members in a module implementation file

import std;
import box;         // For use of the Box class

int main()
{
  Box myBox{ 6.0, 6.0, 18.5 }; // Create a box
  std::println("My box's volume is {}", myBox.volume());
}