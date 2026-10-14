//easy and done


#include<stdio.h>
int reverse(int arr[], int n){
	if(n<=0){
		return 0;
	}
	printf("%d ", arr[n-1]);
	return reverse(arr,n-1);
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	reverse(arr,n);
	return 0;
}
