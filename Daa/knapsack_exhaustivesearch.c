#include<stdio.h>
#include<string.h>
void permutate(int a[],int r,int w[],int p[],int m){
	int i,temp,n,j,k;
	int max = 0;
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			int b=0,v=0;
			for(k=j;k<i+1;k++){
				b = b + w[k];
				v = v + p[k];
			}
			printf("%d-%d\n",b,v);
			if(b<=m && v>max)
				max = v;
		}
	}
	printf("%d",max);
	
}
int main(){
	int i,j,k,n,t;
	printf("Enter size of array :");
	scanf("%d",&n);
	printf("Enter maximum weight bag can carry :");
	scanf("%d",&k);
	int w[n],p[n],a[n];
	char b[n];
	for(i=0;i<n;i++){
		printf("Enter weigth and profit :");
		scanf("%d %d",&w[i],&p[i]);
		a[i] = i;
	}
	permutate(a,n,w,p,k);
}
