#include<stdio.h>
#include<string.h>
int max(int a,int b){
	return (a>b)? a : b;
}
int knap(int n,int wt[],int val[],int k){
	if(n==0 || k==0){
		return 0;
	}
	if(wt[n-1]>k){
		return (knap(n-1,wt,val,k));
	}
	else{
		return(max(val[n-1]+knap(n-1,wt,val,k-wt[n-1]),knap(n-1,wt,val,k)));
	}
}

int main(){
	int i,j,k,n;
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("Enter maximum weight bag can carry:");
	scanf("%d",&k);
	int wt[n],val[n];
	for(i=0;i<n;i++){
		printf("Enter weight and value :");
		scanf("%d %d",&wt[i],&val[i]);
	}
	j = knap(n,wt,val,k);
	printf("%d",j);
}
