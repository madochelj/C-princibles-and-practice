#include <iostream>
#include <string>

int main()
{
  std::cout << "Enter your first Name (followed by Enter):"; // std::endl is not here is because std::cin automatically input a new line character
                                                             // std::cin (character input) geting input from user
                                                             // std::cin >> (varible name) directs input to variable object
  std::string first_name;                                    // std::string is being used as we are not using the (using namespace std) Almost everything will need a std:: before when using the std library.
  std::cin >> first_name;                                    // Example std::int, std::string, std::char, std::float
  std::cout << "Hello, " << first_name << std::endl;                      // Directs variable and string into cout to print
                                                                          //  std::cout every token have to be seperated by << as it's directing into cout
                                                                          //  Example std::cout << (variable) << variable << variable << std:;endl, No matter the length
  
  return 0;
}
