#include <stdio.h>

struct Car {
  char brand[30];
  int year;
};

void updateYear(struct Car *c) {
  c->year = 2025;
}

int main() {
  struct Car myCar = {"Toyota", 2020};

  updateYear(&myCar);  // Pass struct pointer

  printf("Brand: %s\n", myCar.brand);
  printf("Year: %d\n", myCar.year);

  return 0;
}