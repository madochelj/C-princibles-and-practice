#include <iostream>

int main()
{
  double d = 0;

  while (std::cin >> d) {
    int i = d;
    char c = i;
    int i2 = c; // store different data types that may not fix into one another.
                // this will cause narrowsing. The data that's attempted to be store into
                // another being to big.

    std::cout << "d == " << d << " i == " << i << " c == " << c << " i2 == " << i2 << std::endl;
  }
  return 0;
}
