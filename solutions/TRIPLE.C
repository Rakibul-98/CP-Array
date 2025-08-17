// https://vjudge.net/problem/CodeForces-1669B/origin

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int N;
        scanf("%d", &N);
        
        int nums[N+1];
        int count[N+1];
        
        for (int i = 1; i <= N; i++) {
            count[i] = 0;
        }
        
        for (int i = 1; i <= N; i++) {
            scanf("%d", &nums[i]);
            count[nums[i]]++;
        }
        
        int found = -1;
        for (int i = 1; i <= N; i++) {
            if (count[i] >= 3) {
                found = i;
                break;
            }
        }
        
        printf("%d\n", found);
    }
    
    return 0;
}
