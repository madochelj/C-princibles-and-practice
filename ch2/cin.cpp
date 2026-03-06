#include <iostream>
#include <string>

int main()
{
  int integer;
  std::cin >> integer;
  std::cout << integer << std::endl; // Because name is an integer type of any data type is attempted to be read into the object the value will not be stored.

  std::string name;
  std::cin >> name;
  std::cout << name << std::endl; // If an integer type is attmpted to be stored into an integer the value will not be lost.
                                  // The data type will not be an integer is will be stored as a string literal characters.
                                  // The >> operator is white space sensitive
                                  // That mean while trying to read input in a string is there is a whitespace character that seperates two string only
                                  // the first string will be stored as std::cin will terminate the reading as soon as it gets to the first whitespace character.
  return 0;
}
