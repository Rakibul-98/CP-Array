// https://atcoder.jp/contests/abc328/tasks/abc328_b?lang=en

#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);
  int D[101];
  for (int i = 1; i <= N; i++)
    scanf("%d", &D[i]);

  int count = 0;

  for (int month = 1; month <= N; month++)
  {
    int temp = month;
    int md = temp % 10;
    int monthRep = 1;
    while (temp > 0)
    {
      if (temp % 10 != md)
      {
        monthRep = 0;
        break;
      }
      temp /= 10;
    }
    if (!monthRep)
      continue;

    for (int day = 1; day <= D[month]; day++)
    {
      int t = day;
      int dd = t % 10;
      int dayRep = 1;
      while (t > 0)
      {
        if (t % 10 != dd)
        {
          dayRep = 0;
          break;
        }
        t /= 10;
      }

      if (dayRep && dd == md)
        count++;
    }
  }

  printf("%d\n", count);
  return 0;
}
