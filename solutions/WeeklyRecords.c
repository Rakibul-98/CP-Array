// https://atcoder.jp/contests/abc307/tasks/abc307_a?lang=en

#include <stdio.h>

int main()
{
  int N, sum = 0;
  scanf("%d", &N);
  int days = (N * 7);
  int array[days];

  for (int i = 1; i <= days; i++)
  {
    scanf(" %d", &array[i]);
  }
  for (int j = 1; j <= days; j++)
  {
    sum += array[j];
    if (j % 7 == 0)
    {
      printf("%d\n", sum);
      sum = 0;
    }
  }
  return 0;
}