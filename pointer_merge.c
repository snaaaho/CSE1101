// etar array e bujhi nai


#include <stdio.h>
#include <stdlib.h>

int main(){

    int k;
    int s1 = 0;
    int s2 = 0;
    printf("size for 1st pointer: ");
    scanf("%d", &s1);

    printf("size for 2nd pointer: ");
    scanf("%d", &s2);

    printf("Input for 1ST pointer (space separated ints):\n");
    int *p1 = (int *)malloc(s1 * sizeof(int));
    int *p2 = (int *)malloc(s2 * sizeof(int));
    int *p3 = (int *)malloc((s1 + s2) * sizeof(int));

    for (int i = 0; i < s1; i++){
        scanf("%d", (p1 + i));
        *(p3 + i) = *(p1 + i);
    }

    printf("Input for 2ND pointer (space separated ints):\n");
    for (int i = 0; i < s2; i++){
        scanf("%d", (p2 + i));
        *(p3 + s1 + i) = *(p2 + i);
    }
  

    int vMin;
    int vMinIndex;

    for (int i = 0; i < s1 + s2; i++){
        vMin = *(p3 + i);
        vMinIndex = i;

        for (int j = i + 1; j < s1 + s2; j++){
            if (*(p3 + j) < vMin){
                vMin = *(p3 + j);
                vMinIndex = j;
            }
        }
        int t = *(p3 + i);
        *(p3 + i) = vMin;
        *(p3 + vMinIndex) = t;
    }

    printf("Merged pointer (sorted): \n");
    for (int i = 0; i < s1 + s2; i++){
        printf("%d ", *(p3 + i));
    }

    free(p1);
    free(p2);
    free(p3);

    printf("\n");
    return 0;
}