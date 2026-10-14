// bujhchi ....


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int s = 0;
    printf("size : ");
    scanf("%d", &s);
    printf("Now give your inputs (space separated ints):\n");
    int *p = (int *)malloc(s * sizeof(int));

    for (int i = 0; i < s; i++){
        scanf("%d", (p + i));
    }

    int min = INT_MAX;  // min er vitore sobceye boro integer value rakha hoy, jate 1st test ei 1st index or ceye choto hoy and min er majhe dhuke jay..
    int max = INT_MIN;  // max er vitore sobceye choto integer value rakha hoy, jate 1st test ei 1st index or ceye boro hoy and max er majhe dhuke jay..

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