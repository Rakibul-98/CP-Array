// https://atcoder.jp/contests/abc235/tasks/abc235_b?lang=en

#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);
  int array[N];
  for (int i = 0; i < N; i++)
  {
    scanf(" %d", &array[i]);
  }
  int max = array[0];
  for (int j = 0; j < N - 1; j++)
  {
    if (array[j] < array[j + 1])
    {
      max = array[j + 1];
    }
    else
    {
      break;
    }
  }
  printf("%d\n", max);
  return 0;
}