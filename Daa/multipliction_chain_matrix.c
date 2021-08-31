#include<stdio.h>

int mcm(int a[],int i,int j){
	int k,temp;
	if(i>=j){
		return 0;
	}
	int min = 99999;
	for(k=i;k<j;k++){
		temp = mcm(a,i,k) + mcm(a,k+1,j) + a[i-1]*a[k]*a[j] ;
		if(temp<min)
			min = temp;
	}
	return min;
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
	p = mcm(a,i,j);
	printf("%d",p);	
}
