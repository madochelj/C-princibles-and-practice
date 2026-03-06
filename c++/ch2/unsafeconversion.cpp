#include <iostream>

int main()
{
  int a = 2000;
  char b = a;
  int c = b;

  if (a != b) {
    std::cout << "oops!" << a << "!= " << b << std::endl;   // This is an unsafe type conversion because an integer is being converted into
                                                            // a char character. This will result in a loss of information. This is called narrowing.
                                                            // Because not all the valus of an integer as a char equivilent.
  } else {
    std::cout << "Wow we have large characters!\n";
  }
  return 0;
}
