#include<stdio.h>
#include<string.h>
int k[30][30];
int max(int a,int b){
	return (a>b)? a : b;
}
int knap(int n,int wt[],int val[],int w){
	int i,j;
	for(i=0;i<n+1;i++){
		k[i][0] = 0;
	}
	for(i=0;i<w+1;i++){
		k[i][0] = 0;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=w;j++){
			if(wt[i-1]<=j){
				k[i][j] = max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
			}
			else{
				k[i][j] = k[i-1][j];
			}
		}
	}
	return k[n][w];
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
