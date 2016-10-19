#include <stdio.h>

int main() {
    int n, a, s;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) break;
        s = 0;
        while (n--) {
            scanf("%d", &a);
            s += a;
        }
        printf("%d\n", s);
    }

    return 0;
}
