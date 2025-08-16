// https://cses.fi/problemset/task/1083

#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int nums[N];
  int index[N + 1];

  for (int i = 1; i <= N; i++)
  {
    index[i] = 0;
  }

  for (int i = 0; i < N - 1; i++)
  {
    scanf("%d", &nums[i]);
    index[nums[i]] = 1;
  }

  for (int i = 1; i <= N; i++)
  {
    if (index[i] == 0)
    {
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}
