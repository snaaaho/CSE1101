// done


#include<stdio.h>
int main(){
	int arr[]={1, 2, 3, 4, 2, 6, 7, 2, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x, y;
	for(int i=0; i<n; i++){
		printf("%d", arr[i]);
		if(i<(n-1)){
			printf(",");
		}
	}
	printf("\nEnter the value of X and Y:");
	scanf("%d %d", &x, &y);
	printf("\n");
	for(int i=0; i<n; i++){
		if(arr[i] == x){
			arr[i] = y;
		}
	}
	for(int i=0; i<n; i++){
		printf("%d", arr[i]);
		if(i<(n-1)){
			printf(",");
		}
	}
	return 0;
}