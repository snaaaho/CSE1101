// bujhchilam, just revise deya ucit


#include<stdio.h>
int main(){
	int arr[] = {1, 2, 2, 3, 5, 4, 2, 3, 4, 6};
	int i, j, l;
	l = sizeof(arr) / sizeof(arr[0]);
	int new[l];
	int m=0;
	for(i = 0 ; i < l ; i++){
		int dup = 0;
		for(j = 0 ; j < m ; j++){
			if(arr[i] == new[j]){
				dup = 1;
				break;
			}
		}
		if(dup == 0){
			new[m] = arr[i];
			m++;
		}
	}
	printf("Array after removing duplicates: ");
	for(i = 0 ; i < m ; i++){
		printf("%d", new[i]);
		if(i < (m-1)){
			printf(",");
		}
	}
	return 0;
}