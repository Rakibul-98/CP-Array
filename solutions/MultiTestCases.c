// https://atcoder.jp/contests/abc284/tasks/abc284_b?lang=en

#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    int N, count = 0;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
    {
      scanf(" %d", &array[i]);
    }
    for (int j = 0; j < N; j++)
    {
      if (array[j] % 2 != 0)
      {
        count++;
      }
    }
    printf("%d\n", count);
  }

  return 0;
}