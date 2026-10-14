// bujhchi, logic sum er motoi


#include<stdio.h>
#include<stdlib.h>

int reverse(int *p, int n){
	if(n<=0){
		return 0;
	}
	printf("%d ", *(p + n - 1));
	return reverse(p,n-1);
}
int main(){
    int n;
	scanf("%d", &n);
    int *p = (int *)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++){
        scanf(" %d", p+i);
    }
	reverse(p,n);
    free(p);
	return 0;
}