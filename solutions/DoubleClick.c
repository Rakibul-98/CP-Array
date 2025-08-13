// https://atcoder.jp/contests/abc297/tasks/abc297_a?lang=en

#include <stdio.h>

int main()
{
  int N, D;
  scanf(" %d %d", &N, &D);
  int array[N];
  for (int i = 0; i < N; i++)
  {
    scanf(" %d", &array[i]);
  }
  for (int j = 0; j < N - 1; j++)
  {
    if (array[j + 1] - array[j] <= D)
    {
      printf("%d", array[j + 1]);
      return 0;
    }
  }
  printf("%d", -1);
  return 0;
}