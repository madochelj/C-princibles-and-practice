#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your first and last name: "; 
  std::string first_name;
  std::string last_name;  // This a a method of store in the input of a string with a whitespace character
                          // Declaring two string variable then using both of these objects to store the two strings
                          // than cin outputs.

  std::cin >> first_name >> last_name;
  std::cout << first_name << " " << last_name << std::endl;
  return 0;
}
