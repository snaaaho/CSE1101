//done


#include<stdio.h>
int main(){
	int arr[] = {12, 34, 22, 76, 16, 35, 26, 88, 54, 67};
	int length = sizeof(arr)/sizeof(arr[0]);
	int min = arr[0], max = arr[0];
	for(int i=0 ; i<length ; i++){
	    if(min>arr[i]){
	        min = arr[i];
	    }
	}
	for(int i=0 ; i<length ; i++){
	    if(max<arr[i]){
	        max = arr[i];
	    }
	}
	printf("Minimum value is %d and Maximum value is %d", min, max);
	return 0;
}