// bujhi nai


#include <stdio.h>
void mergeSort(int arr[], int st, int end) {
	if(st >= end) return;
	int mid = (st+end)/2;
	int size1 = mid - st + 1, size2 = end - mid;
	int arr1[size1];
	int arr2[size2];
	int i = 0, j = 0, k;
	for(int x = st; x < (st+size1); x++) {
        	arr1[i++] = arr[x];
	}
	for(int x = mid+1; x < (end+1); x++) {
        	arr2[j++] = arr[x];
	}
	mergeSort(arr1, 0, size1-1);
	mergeSort(arr2, 0, size2-1);
	i = 0, j = 0, k = st;
	while(i < size1 && j < size2) {
        	if(arr1[i] < arr2[j]) {
			arr[k++] = arr1[i++];
        	}
        	else if(arr2[j] < arr1[i]) {
        		arr[k++] = arr2[j++];
        	}
        	else {
        		arr[k++] = arr1[i++];
        		arr[k++] = arr2[j++]; 
        	}
	}
	while(i < size1) arr[k++] = arr1[i++];
	while(j < size2) arr[k++] = arr2[j++];    
}
void printArray(int arr[], int size) {
	for(int i = 0; i < size; i++) {
        	printf("%d ", arr[i]);
        }
}

int main() {
	int arr[] = {10, 4, 1, 3, 100, 50, 23};
	int s = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr, 0, s-1);
	printArray(arr, s);    
	return 0;
}
