#include <custom.h>
#include <elf.h>
#include <iostream>
#include <new>
#include <stdarg.h>
#include <stdio.h>
#include <string>
int getargs(std::string str, ...) noexcept {
  va_list args;
  char *byte = new (std::nothrow) char[3];
  for (auto i : str) {
    byte = NULL;
    if (i == '%') {
      byte = &i;
    }
    if (byte != NULL) {
    } else {
      std::cout << i;
    }
  }
  return 1;
}

int main(void) {}
