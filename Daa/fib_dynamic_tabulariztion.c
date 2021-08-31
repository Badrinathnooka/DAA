#include<stdio.h>
#include<string.h>
int fib(int n,int a[]){
	if(n<0){
		return -1;
	}
	a[0] = 0;
	a[1] = 1;
	int i;
	for(i=2;i<n;i++){
		a[i] = a[i-2] + a[i-1];
	}
	return a[n-1];
}
int main(){
	int i,j,k,n;
	printf("Enter fib number :");
	scanf("%d",&n);
	int a[n+1];
	k = fib(n+1,a);
	printf("%d",k);
}
