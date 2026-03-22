#include <stdio.h>
#include <stdlib.h>

// Boro size-er array dile global kora bhalo
int a[100005];

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n, flag = 0;
        if (scanf("%d", &n) != 1) break;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        // Logic: Kono ekta pair condition satisfy korlei YES
        for (int i = 0; i < n - 1; i++) {
            int diff = abs(a[i] - a[i + 1]);
            if (diff == 7 || diff == 5) {
                flag = 1;
                break; // Ekbar peye gele ar loop kolar dorkar nei
            }
        }

        if (flag == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
