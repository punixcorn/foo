#include <iostream>
#include <string>
int main(int argc, char **argv) {
  if (argc == 1)
    exit(1);
  std::string password;
  while (argc > 1) {
    --argc;
    password = *(argv + argc);
    if (password == "2424")
      std::cout << "Yay you found the password\n";
  }
  exit(0);
}
