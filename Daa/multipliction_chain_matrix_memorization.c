#include<stdio.h>
int dp[100][100] ;
int mcm(int a[],int i,int j){
	int k,temp;
	if(i>=j){
		dp[i][j] = 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	else{
	int min = 99999;
	for(k=i;k<j;k++){
		temp = mcm(a,i,k) + mcm(a,k+1,j) + a[i-1]*a[k]*a[j] ;
		if(temp<min)
			min = temp;
	}
	dp[i][j] = min;
	return min;
}
}

int main(){
	int n,i=1,p,m=0;
	printf("Enter number of matrices:");
	scanf("%d",&n);
	int a[n+1],j=n;
	for(m=0;m<n+1;m++){
		printf("Enter size of matrices :");
		scanf("%d",&a[m]);
	}
	for(m=0;m<n;m++){
		for(p=0;p<n;p++){
			dp[m][n] = -1;
		}
	}
	p = mcm(a,i,j);
	printf("%d",p);	
}
