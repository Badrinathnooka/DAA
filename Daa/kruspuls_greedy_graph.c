#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,k,l,n,min,m,mst=0;
	printf("Enter number of nodes :");
	scanf("%d",&n);
	int a[n][n],c[n],p[n];
	printf("Enter 0 if not connected else enter weight if connected to node \n:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter for %d connected for %d :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int visit[n];
	for(i=0;i<n;i++){
		c[i] = 9999;
		p[i] = i;
		visit[i]=0;
	}
	p[0]=-1;
	for(k=0;k<n;k++){
		min = 999;
		for(i=0;i<n;i++){
			//printf("%d",i);
			for(j=0;j<n;j++){ 
				if(a[i][j]<min && p[i]!=p[j] && a[i][j]!=0){
					min = a[i][j];
					p[i] = j;
					m = i;
					l = j;
				}
		}
	}
	mst = mst + min ;
	printf("%d\n",mst);
	a[m][l] = a[l][m] = 9999;
	//printf("%d",k);
}
printf("%d",mst);
}
