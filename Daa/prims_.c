#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,k,l,n;
	printf("Enter number of nodes :");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter 0 if not connected else enter 1 if connected to node \n:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter for %d connected for %d :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int visit[n];
	for(i=0;i<n;i++){
		visit[i]=0;
	}
