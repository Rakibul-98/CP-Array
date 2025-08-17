// https://atcoder.jp/contests/abc293/tasks/abc293_b?lang=en

#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int exists[N + 1];
  for (int i = 1; i <= N; i++)
  {
    exists[i] = 0;
  }

  int nums[N + 1];
  for (int i = 1; i <= N; i++)
  {
    scanf("%d", &nums[i]);
  }

  for (int i = 1; i <= N; i++)
  {
    if (!exists[i])
    {
      exists[nums[i]] = 1;
    }
  }

  int result[N], count = 0;
  for (int i = 1; i <= N; i++)
  {
    if (!exists[i])
    {
      result[count++] = i;
    }
  }
  printf("%d\n", count);
  for (int i = 0; i < count; i++)
  {
    printf("%d ", result[i]);
  }

  return 0;
}
