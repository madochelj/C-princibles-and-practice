#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your first and second name" << std::endl; // the << operator is white space sensitive. If trying to read input from iostream
                                                                       // the << operator whille throw away any input after a white space character.
                                                                       // ex std::cin << sring_1 << string_2 if there are two literal string seperated by a white space
                                                                       // character two string variable are need to complete catach all data.
  std:string first;
  std::string second;
  std::cin >> first >> second
  return 0;
}
