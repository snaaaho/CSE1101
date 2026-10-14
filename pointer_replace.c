// bujhchi


#include <stdio.h>
#include <stdlib.h>

int main(){
    int s = 0;
    printf("size : ");
    scanf("%d", &s);
    printf("Now give your inputs(space separated ints) :\n");
    int *p = (int *)malloc(s * sizeof(int));

    for (int i = 0; i < s; i++){
        scanf("%d", (p + i));
    }

    printf("Now replace x with y :\n");
    int x, y;
    scanf("%d %d", &x, &y);

    printf("prev arr:\n");

    for (int i = 0; i < s; i++){
        printf("%d ", *(p + i));
    }

    printf("\n");

    for (int i = 0; i < s; i++){
        if (*(p + i) == x){
            *(p + i) = y;
        }
    }

    printf("current arr:\n");

    for (int i = 0; i < s; i++){
        printf("%d ", *(p + i));
    }
    printf("\n");

    free(p);

    return 0;
}