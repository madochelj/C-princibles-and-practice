#include <iostream>
#include <string>

int main()
{
  std::string previous = " ";
  std::string current;
  int counter = 0;

  while (std::cin >> current) {
    if (previous == current) {
      counter++;
      std::cout << counter << " " << "repeated words" << std::endl;    // detets if multiple characters that match have been inputed
                                                    // will terminated when detecting duplicate characters

    } 
    if (previous != current) {
      std::cout << "Not repeated" << std::endl;
    }
    previous = current;
  }

  return 0;
}
