// https://atcoder.jp/contests/abc368/tasks/abc368_a?lang=en

#include <stdio.h>

int main()
{
  int N, K;
  scanf(" %d %d", &N, &K);
  int array[N];

  for (int i = 0; i < N; i++)
  {
    scanf(" %d", &array[i]);
  }
  for (int j = N - K; j < N; j++)
  {
    printf("%d ", array[j]);
  }
  for (int j = 0; j < N - K; j++)
  {
    printf("%d ", array[j]);
  }
  printf("\n");
  return 0;
}