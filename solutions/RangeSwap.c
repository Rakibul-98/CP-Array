// https://atcoder.jp/contests/abc286/tasks/abc286_a?lang=en

#include <stdio.h>

int main()
{
  int N, P, Q, R, S;
  scanf("%d %d %d %d %d", &N, &P, &Q, &R, &S);
  int array[N + 1];
  for (int i = 1; i <= N; i++)
  {
    scanf(" %d", &array[i]);
  }
  int newArray[N + 1];
  for (int j = 1; j <= N; j++)
  {

    if (j >= P && j <= Q)
    {
      newArray[j] = array[R + (j - P)];
    }
    else if (j >= R && j <= S)
    {
      newArray[j] = array[P + (j - R)];
    }
    else
    {
      newArray[j] = array[j];
    }
  }
  for (int i = 1; i <= N; i++)
  {
    printf("%d ", newArray[i]);
  }
  return 0;
}