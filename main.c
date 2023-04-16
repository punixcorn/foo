#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  printf("enter the password\n");
  char *password = (char *)malloc(sizeof(char) * 4);
  scanf("%s", password);
  if (strncmp(password, "2424", 4) == 0) {
    printf("Yay got the password\n");
  } else {
    printf("wrong password\n");
  }

  return 0;
}
