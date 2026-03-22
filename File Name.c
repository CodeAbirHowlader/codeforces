#include <stdio.h>
#include <string.h>

int main() {
    int n, count = 0, con = 0;
    scanf("%d", &n);
    char a[100];
    scanf("%s", a);

    for (int i = 0; i < n; i++) {
        if (a[i] == 'x') {
            con++;
            if (con > 2) {
                count++;
            }
        } else {
            con = 0;
        }
    }

    printf("%d\n", count);

}
