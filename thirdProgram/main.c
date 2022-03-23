#include <stdio.h>

int main(void)
{
  int time = 0;
  int speed = 0;

  printf("This program calculates the how far you go given your time and speed.\nPlease enter your time: ");
  scanf("%d", &time);

  printf("Please enter your speed: ");
  scanf("%d", &speed);

  int distance = time * speed;

  printf("Distance: %d\n", distance);

  return 0;
}