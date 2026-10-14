// hard ache ektu, revise dilei hbe


#include <stdio.h>

int main() {
    int a, i, j, num, s;

    printf("Enter Line Numbers: ");
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        num = 1;
     /*   for(s = 0; s < a - i; s++){
            printf(" ");
        }    */              // assignment e chilo na, just right handed slop to pyramid
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);    // next = cur * (i - j)/(j + 1)       next and curr er ncr vag korle ase
        }

        printf("\n");
    }

    return 0;
}
