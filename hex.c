#include <stdio.h>

/* This code takes in the value n for the
 * size of the kite and outputs the shape in corresponding
 * size value
 */

int main() {
  int i, j, n;

  printf("Enter the size of the kite: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  for (i = n - 1; i >= 1; i--) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
