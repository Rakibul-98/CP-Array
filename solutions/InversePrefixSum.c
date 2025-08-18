// https://atcoder.jp/contests/abc280/tasks/abc280_b?lang=en

#include <stdio.h>

int main()
{
  int N;
  scanf(" %d", &N);

  int nums[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &nums[i]);
  }

  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    printf("%d ", nums[i] - sum);
    sum += nums[i] - sum;
  }
  return 0;
}