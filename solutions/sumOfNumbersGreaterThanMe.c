// https://atcoder.jp/contests/abc331/tasks/abc331_c?lang=en

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

int upperBound(int arr[], int n, int x)
{
  int l = 0, r = n;
  while (l < r)
  {
    int mid = (l + r) / 2;
    if (arr[mid] <= x)
      l = mid + 1;
    else
      r = mid;
  }
  return l;
}

int main()
{
  int N;
  scanf("%d", &N);

  int nums[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &nums[i]);
  }

  int sorted[N];
  for (int i = 0; i < N; i++)
    sorted[i] = nums[i];
  qsort(sorted, N, sizeof(int), cmp);

  long long suffixSum[N + 1];
  suffixSum[N] = 0;
  for (int i = N - 1; i >= 0; i--)
  {
    suffixSum[i] = suffixSum[i + 1] + sorted[i];
  }

  for (int i = 0; i < N; i++)
  {
    int idx = upperBound(sorted, N, nums[i]);
    long long ans = (idx < N) ? suffixSum[idx] : 0;
    printf("%lld ", ans);
  }

  return 0;
}
