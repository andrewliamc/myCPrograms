// understanding char

#include <stdio.h>

int main(void)
{
  char c = 'd';  // use single quotes for char

  printf("c: ");
  scanf("%c", &c);
  printf("c: %c\n", c);
  printf("c: %d\n", c);

  return 0;
}