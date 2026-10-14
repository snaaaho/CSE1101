// bujhi nai


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

 

    int vMin;
    int vMinIndex;

    for (int i = 0; i < s; i++){
        vMin = *(p + i);
        vMinIndex = i;

        for (int j = i + 1; j < s; j++){
            if (*(p + j) < vMin){
            vMin = *(p + j);
            vMinIndex = j;
            }
        }
        int t = *(p + i);
        *(p + i) = vMin;
        *(p + vMinIndex) = t;
    }

    printf("\n\ncurrent pointer(after sorting):\n");

    for (int i = 0; i < s; i++){
        printf("%d ", *(p + i));
    }
    printf("\n");

  
    int *uniqueP = (int *)malloc(s * sizeof(int));
    int indexForUniqueP = 0;
    for (int i = 0; i < s; i++){
        if (i == 0){
            *(uniqueP + i) = *(p + i);
            continue;
        }
        if (*(uniqueP + indexForUniqueP) != *(p + i)){
            *(uniqueP + indexForUniqueP + 1) = *(p + i);
            indexForUniqueP++;
        }
    }

    printf("Array without duplicates:\n");

    for (int i = 0; i <= indexForUniqueP; i++){
        printf("%d ", *(uniqueP + i));
    }

    printf("\n");
    free(p);
    free(uniqueP);

    return 0;
}