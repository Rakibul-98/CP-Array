// https://atcoder.jp/contests/abc236/tasks/abc236_b?lang=en

#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int cards[N * 4];
  int count[N + 1];
  for (int i = 1; i <= N; i++)
  {
    count[i] = 0;
  }
  for (int c = 1; c < (N * 4); c++)
  {
    scanf("%d", &cards[c]);
    count[cards[c]]++;
  }
  for (int i = 1; i <= N; i++)
  {
    if (count[i] != 4)
    {
      printf("%d", i);
    }
  }

  return 0;
}
