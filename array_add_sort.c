// bujhi nai


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
        if (j < n1 && (k >= n2 || arr1[j] < arr2[k])) {
            arr3[i] = arr1[j];           //loop use korle j er value sobsomoy barto, kintu new array te 2nd array thekeo asteche, tai altime j er value barano jabe na.je array theke add hobe tar index barbe..
            j++;
        }
        else {
            arr3[i] = arr2[k];
            k++; 
        }
    }
    printf("Merged Sorted Array: ");
    for (int m = 0; m < n3; m++) {
        printf("%d ", arr3[m]);
    }
    return 0;
}