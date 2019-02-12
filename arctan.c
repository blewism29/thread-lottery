#include "arctan.h"
#include <math.h>

double calculatePi (int pSequences) {
  int counter;
  float pi1 = 1.0f / 2.0f;
  float pi2 = 1.0f / 3.0f;
  for (counter = 1; counter <= pSequences * 50; counter = counter + 1) {
    printf("%d | pi1 = %.12f, pi2 = %.12f\n", counter, pi1, pi2);
    pi1 = pi1 + pow(-1, counter) * (pow(1.0f / 2.0f, (2 * counter) + 1) / ((2 * counter) + 1));
    pi2 = pi2 + pow(-1, counter) * (pow(1.0f / 3.0f, (2 * counter) + 1) / ((2 * counter) + 1));
  }
  return 4 * (pi1 + pi2);
}