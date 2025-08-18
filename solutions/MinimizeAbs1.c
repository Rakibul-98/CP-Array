// https://atcoder.jp/contests/abc330/tasks/abc330_b?lang=en

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, L, R;
  scanf(" %d %d %d", &N, &L, &R);

  int nums[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &nums[i]);
  }

  for (int i = 0; i < N; i++)
  {
    if (nums[i] < L)
    {
      printf("%d ", L);
    }
    else if (nums[i] > R)
    {
      printf("%d ", R);
    }
    else
    {
      printf("%d ", nums[i]);
    }
  }
  return 0;
}