// assignment e eta dei nai, nicher ta dichi



#include <stdio.h>
int main() {
    int arr1[] = {1, 4, 7, 9, 17, 22};
    int arr2[] = {2, 3, 5, 8, 10, 12, 15, 19};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = n1 + n2; 
    int arr3[n3];
    int j = 0; 
    int k = 0; 
    for (int i = 0; i < n3; i++) {
        if(i < n1){
            arr3[i] = arr1[i];
        }
        else{
            arr3[i] = arr2[k];
            k++; 
        }
    }
    for(int i = 0; i < n3 - 1; i++){
        for(j = 0; j < n3 - 1 - i; j++){
            if(arr3[j] > arr3[j + 1]){
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
    printf("Merged Sorted Array: ");
    for (int m = 0; m < n3; m++) {
        printf("%d ", arr3[m]);
    }
    return 0;
}