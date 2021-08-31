#include<stdio.h>
#include<string.h>
int max(int a,int b){
	return (a>b)? a : b;
}
int knap(int n,int wt[],int val[],int k,int a[][k+1]){
	if(n==0 || k==0){
		return 0;
	}
	else if(a[n][k]!=-1){
		return a[n][k];	
	}
	else{
		if(wt[n-1]>k){ 
			a[n][k] =  (knap(n-1,wt,val,k,a));
			return a[n][k];
		}
		else{
			a[n][k] =  (max(val[n-1]+knap(n-1,wt,val,k-wt[n-1],a),knap(n-1,wt,val,k,a)));}
			return a[n][k];
		}
}

int main(){
	int i,j,k,n;
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("Enter maximum weight bag can carry:");
	scanf("%d",&k);
	int wt[n],val[n],a[n+1][k+1];
	for(i=0;i<n;i++){
		printf("Enter weight and value :");
		scanf("%d %d",&wt[i],&val[i]);
	}
	for(i=0;i<n+1;i++){
		for(j=0;j<k+1;j++){
			a[i][j] = -1;
		}
	}
	j = knap(n,wt,val,k,a);
	printf("%d",j);
}
