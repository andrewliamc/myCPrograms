// let's talk about floats!
// now we can store REAL numbers

#include <stdio.h>

int main(void)
{
  float x = 5.2;
  double y = -9.8;

  printf("x: ");
  scanf("%f", &x);
  printf("x: %f\n", x);

  printf("y: ");
  scanf("%lf", &y);
  printf("y: %f\n", y);

  // return 0;
}