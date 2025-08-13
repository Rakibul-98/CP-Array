// https://atcoder.jp/contests/abc308/tasks/abc308_a?lang=en

#include <stdio.h>

int main()
{
  int array[8];
  for (int i = 0; i < 8; i++)
  {
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < 8; i++)
  {
    if (array[i] < 100 || array[i] > 675 || array[i] % 25 != 0)
    {
      printf("No\n");
      return 0;
    }
    if (i > 0 && array[i] < array[i - 1])
    {
      printf("No\n");
      return 0;
    }
  }

  printf("Yes\n");
  return 0;
}
