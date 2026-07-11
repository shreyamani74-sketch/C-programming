#include <stdio.h>

int main() {
  int age = 18;

  printf("%d\n", age >= 18); // 1 (true), old enough to vote
  printf("%d\n", age < 18);  // 0 (false)

  return 0;
}