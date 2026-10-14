// assignment e eta dei nai, nicher ta dichi


#include <stdio.h>
#include <stdlib.h>


int main(){
    int s = 0;
    printf("size : ");
    scanf("%d", &s);
    printf("Now give your inputs (space separated ints):\n");
    int *p = (int *)malloc(s * sizeof(int));

    for (int i = 0; i < s; i++){
        scanf("%d", (p + i));
    }

    int min = *p;
    int max = *p;

    for (int i = 0; i < s; i++){
        if ((*(p + i)) < min){
            min = *(p + i);
        }
        if (*(p + i) > max){
            max = (*(p + i));
        }
    }

    printf("Min : %d\nMax : %d\n", min, max);

    free(p);

    return 0;
}