#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter two names: ";

  std::string f_name;
  std::string s_name;

  std::cin >> f_name >> s_name;
  if (f_name == s_name) {
    std::cout << "That's the same name twice" << std::endl;
  }
  
  if (f_name < s_name) {
    std::cout << f_name << " is alphabetically lower than " << s_name << std::endl; // You can use the greator than or lesser than operator to compare the alphabetically order of characers
                                                                                    // Does not work with string only characers
  }

  if (f_name > s_name) {
    std::cout << f_name << " is alphabetically high than " << s_name << std::endl;
  }
  return 0;
}
