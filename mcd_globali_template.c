#include <stdio.h>

int n = 55;
int m = 234;

int x = 42;
int y = 54;

// testare con x e y negativi

int main(void) {

while(x != y)
{
  printf("%d %d\n", x, y);

  if(x > y) x = x-y;
  else y = y-x;
}

return(1);
 

//return 0;
}