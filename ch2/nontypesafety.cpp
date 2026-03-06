#include <iostream>

int main()
{

  double x; // declaring a x variable with the type of double
            // x is undefined because it's not initialized

  double y = x;
  double z = 2.0 + x;

  std::cout << x << std::endl; // That value that will be outputed into stream is
                               // the value tha's stored in memory
  return 0;
}
