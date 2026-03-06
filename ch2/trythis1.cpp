#include <iostream>
#include <string>


// This takes a string input and integer and return hello message with age in months.
// convert years age to months intotal
int main()
{
  std::cout << "Please enter your first name and age: ";  

  std::string first_name = "???";
  double age = 0;

  std::cin >> first_name >> age;
  age *= 12;
  std::cout << "Hello, " << first_name << " (age in month " << age << ")" << std::endl;
  return 0;
}
