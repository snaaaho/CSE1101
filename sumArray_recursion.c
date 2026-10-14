//easy and done


#include<stdio.h>
int sum_arr(int arr[], int n){
	if(n<=0){
		return 0;
	}
	return arr[n-1]+sum_arr(arr, n-1);
}
int main(){
	int arr[]={10,2,4,3,6,5,8,67};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Sum of array is %d", sum_arr(arr, n));
	return 0;
}

