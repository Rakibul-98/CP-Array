// https://codeforces.com/problemset/problem/1873/B

#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);

  while (t--)
  {
    int N;
    scanf("%d", &N);

    int nums[N];
    long long product = 1;
    int minIndex = 0;

    for (int i = 0; i < N; i++)
    {
      scanf("%d", &nums[i]);
      if (nums[i] < nums[minIndex])
      {
        minIndex = i;
      }
    }

    nums[minIndex]++;

    for (int i = 0; i < N; i++)
    {
      product *= nums[i];
    }
    printf("%lld\n", product);
  }
  return 0;
}
