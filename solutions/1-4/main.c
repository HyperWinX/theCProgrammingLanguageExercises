#include <stdio.h>

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Celsius | Fahrenheit\n");
  while (fahr <= upper) {
    celsius = (fahr / (5.0 * 9.0)) + 32.0;
    printf("%5.0f     %6.1f\n", celsius, fahr);
    fahr += step;
  }
}