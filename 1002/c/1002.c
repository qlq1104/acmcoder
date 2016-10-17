#include <stdio.h>
int main() {
    int n, init = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (init) {
            printf("\n\n");
        } else {
            init = 1;
        }
        printf("Case %d:\n", i + 1);
        printf("%d + %d = %d", a, b, a + b);
    }
    return 0;
}
