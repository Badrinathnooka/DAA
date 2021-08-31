#include<stdio.h>
#include<string.h>
int a[30][30];
int max(int a,int b){
	return (a>b)? a : b;
}
int knap(int n,int wt[],int val[],int k){
	
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
