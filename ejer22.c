#include <stdio.h>

int main()
{
  int n;
  int i, j;
  scanf("%d", &n);
  
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      if (j > 9)
      {
        printf("%d", j%10);
      }
      else {
        printf("%d", j);
      }
      
    }
    printf("\n");
  }
  
  return 0;
}