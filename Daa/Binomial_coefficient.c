#include<stdio.h>
int dp[100][100] ;
void Bc(int n,int k){
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=k;j++){
			if(j==0 || i==j){
				dp[i][j] = 1;
			}
			else{
				dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
			}
		}
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=k;j++){
			printf("%d ",dp[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n,k,i,j;
	printf("Enter n and k :");
	scanf("%d %d",&n,&k);
	Bc(n,k);
}
