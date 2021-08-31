#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,k,l,n,min,m;
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
		p[i] = -1;
		visit[i]=0;
	}
	c[0] = 0;
	i=0;
	for(m=0;m<n;m++){
		for(j=0;j<n;j++){ 
			if(a[i][j]!=0 && a[i][j]<c[j] && visit[j]==0){
				c[j] = a[i][j];
				p[j] = i;
				visit[i] = 1;
			}
		}
			min = 999;
			for(k=0;k<n;k++){
				if(min > c[k] && visit[k]==0){
					min  = c[k];
					i = k;
				}
			}
	}
	for(i=0;i<n;i++){
		printf("%d-%d\n",p[i],c[i]);
	}
}
