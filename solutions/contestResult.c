// https://atcoder.jp/contests/abc290/tasks/abc290_a?lang=en

#include <stdio.h>

int main()
{
  int N, M;
  scanf(" %d %d", &N, &M);
  int array[N];
  int sum = 0;
  for (int i = 1; i <= N; i++)
  {
    scanf(" %d", &array[i]);
  }
  for (int j = 1; j <= M; j++)
  {
    int p;
    scanf("%d", &p);
    for (int i = 1; i <= N; i++)
    {
      if (i == p)
      {
        sum += array[i];
      }
    }
  }
  printf("%d", sum);

  printf("\n");
  return 0;
}