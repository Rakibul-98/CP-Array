#include <stdio.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d", &t);

  while (t--)
  {
    int N;
    long long int sum = 0;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
    {
      scanf("%d", &array[i]);
      sum += array[i];
    }

    long long int r = sqrt(sum);

    if (r * r == sum)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
  return 0;
}
