#include <iostream>
#include <string>

int main()
{
  std::string previous = " ";
  std::string current;

  while (std::cin >> current) {
    if (previous == current) {
      std::cout << "repeated word" << std::endl;    // detets if multiple characters that match have been inputed
                                                    // will terminated when detecting duplicate characters
      break;
    } 
    if (previous != current) {
      std::cout << "Not repeated" << std::endl;
    }
    previous = current;
  }

  return 0;
}
