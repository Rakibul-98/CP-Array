// https://atcoder.jp/contests/abc301/tasks/abc301_b?lang=en

#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int nums[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &nums[i]);
  }

  for (int i = 0; i < N - 1; i++)
  {
    printf("%d ", nums[i]);
    if (nums[i] < nums[i + 1])
    {
      for (int j = nums[i] + 1; j < nums[i + 1]; j++)
      {
        printf("%d ", j);
      }
    }
    else if (nums[i] > nums[i + 1])
    {
      for (int j = nums[i] - 1; j > nums[i + 1]; j--)
      {
        printf("%d ", j);
      }
    }
  }

  printf("%d\n", nums[N - 1]);

  return 0;
}
