#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  printf("enter the password\n");
  char password[4] = {0};
  scanf("%s", password);
  if (strncmp(password, "1111", 4) == 0) {
    printf("Yay got the password\n");
  } else {
    printf("wrong password\n");
  }

  return 0;
}
