// https://codeforces.com/problemset/problem/1878/A

#include <stdio.h>

int main()
{
  int t;
  scanf(" %d", &t);

  while (t--)
  {
    int n, k;
    scanf(" %d %d", &n, &k);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &nums[i]);
    }

    int exists = 0;
    for (int i = 0; i < n; i++)
    {
      if (nums[i] == k)
      {
        exists++;
      }
    }

    if (exists == 0)
    {
      printf("NO\n");
    }
    else
    {
      printf("YES\n");
    }
  }
  return 0;
}