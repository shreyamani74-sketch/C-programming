#include <stdio.h>

struct Example {
  char a; // 1 byte
  int b; // 4 bytes
  char c; // 1 byte
};

int main() {
  printf("Size of struct: %zu bytes\n", sizeof(struct Example));
  return 0;
}