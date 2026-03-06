#include <iostream>
#include <string>

/*This drill is to write a program that produces a simple form letter based on
user input. Begin by typing the code from §3.1 prompting a user to enter
his or her first name and writing “Hello, first_name” where first_name is
the name entered by the user. Then modify your code as follows: change
the prompt to “Enter the name of the person you want to write to” and
change the output to “Dear first_name,”. Don’t forget the comma.*/

int main()
{
  char friends_sex = 0;
  std::string first_name;
  std::string friends_firstname;

  std::cout << "Enter the name of the person you want to write to: ";

  std::cin >> first_name;
  std::cout << "Dear " << first_name << ", " << std::endl;
  std::cout << "\tHow are you doing. it's been a long time since we've last talked." << std::endl;
  std::cout << "\tHow it school going for you. Last i've heard you we're doing very well and earning high grades." << std::endl;
  std::cout << "\tDon't loose track for your main goals." << std::endl;
  std::cout << "What's yoru firends name: ";

  std::cin >> friends_firstname;

  std::cout << "Have you seend " << friends_firstname << " lateley?" << std::endl;

  std::cout << "What your friends gender m or f: ";

  std::cin >> friends_sex;

  if (friends_sex == 'm') {
    std::cout << "If you see " << friends_firstname << " please ask him to call me\n";
  } else if (friends_sex == 'f') {
    std::cout << "If you see " << friends_firstname << " please ask her to call me\n";
  }

  return 0;
}
