#include <stdio.h>

int main() {
    int i;
    int a = 1, b = 2, c;
    printf("%d, %d", a, b);
    for (i = 2; i < 100; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
