#include <stdio.h>
int main (void)
{
  int a = 1;
  int b = 5;
  int c = (a + b);
  int d = (c * 2);

  printf("%d + %d = %d\n", a, b, c);
  printf("%d multiplied by 2 is %d+\n",c, d);
  printf("All is done");
  return 0;
    
}