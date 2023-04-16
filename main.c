#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *New(ssize_t num) { return (char *)malloc(num); }

int main(void) {
  printf("enter the password\n");
  char *password = New(4);
  assert(password != NULL);
  fscanf(stdin, "%s", password);
  if (strncmp(password, "char", 4) == 0) {
    printf("Yay got the password\n");
  } else {
    printf("wrong password\n");
  }
  exit(1);
}
