#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    int c = 0;
    int pf = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] == -1 && pf == 0) {
            c++;
        } else if (x[i] == -1 && pf > 0) {
            pf--;
        } else {
            pf += x[i];
        }
    }
    printf("%d\n", c);
    return 0;
}