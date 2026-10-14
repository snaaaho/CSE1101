// bujhchi


#include <stdio.h>

int main() {
    int n, i, j, s;

    printf("Enter Line Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (s = 1; s <= n - i; s++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i) {
                printf(" *");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}