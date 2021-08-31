#include<stdio.h>
#include<string.h>

int fib(int n,int a[]){
	if(n==0 || n==1)
	{
		a[n] = n;
	}
	else{
		if(a[n]==-1){
			a[n] = fib(n-2,a)+fib(n-1,a);
		}
	}
	return a[n];
}

int main(){
	int n,i,k;
	printf("Enter the value to print of fib :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		a[i] = -1;
	}
	k = fib(n-1,a);
	printf("%d",k);
}
