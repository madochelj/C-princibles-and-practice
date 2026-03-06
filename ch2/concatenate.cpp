#include <iostream>
#include <string>

int main()
{
  std::cout << "Input first ane last name: ";   // program in taking in two seperate string literals and compbining them inside a seperate variable. 
                                                // Exmaple of using the concatenate operator to combine strings.

  std::string first;
  std::string second;

  std::cin >> first >> second;

  std::string name = first + " " + second;

  std::cout << name << std::endl;
  return 0;
}
