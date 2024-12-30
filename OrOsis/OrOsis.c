#include <stdio.h>
#include <limits.h>

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        int a[n], overallOR = 0;

      
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            overallOR |= a[i];
        }

        int min = INT_MAX, count = 0; 

        
        for (int i = 0; i < n; i++) {
            int subOR = 0;
            for (int j = i; j < n; j++) {
                subOR |= a[j];
                if (subOR == overallOR) {
                    int length = j - i + 1;
                    if (length < min) {
                        min = length;
                        count = 1; 
                    } else if (length == min) {
                        count++; 
                    }
                    break; 
                }
            }
        }
        if (count > 0) {
            printf("%d %d\n", min, count);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
