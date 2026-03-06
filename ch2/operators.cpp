#include <iostream>
#include <cmath>
int main()
{
  double box;

  std::cout << "Enter a number: "; 
  std::cin >> box;                                            // Experimenting using different arithmatic operatiing or numerical values

  std::cout << "n == " << box << std::endl;
  std::cout << "n+1 == " <<  box + 1 << std::endl;
  std::cout << "n * 3 = " << box * 3 << std::endl;
  std::cout << "n doubled = " << box * 2 << std::endl;
  std::cout << "n squared = " << box * box << std::endl;
  std::cout << "n halfed = " << box / 2 << std::endl;
  std::cout << "n square root = " << sqrt(box) << std::endl;
  return 0;
}
