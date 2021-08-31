#include<stdio.h>
void lowcost(int n,int a[][n],int c[],int d[],int st){
	c[n-1] = 0 ;
	d[n-1] = n-1;
	int i,k,min;
	for(i=n-2;i>=0;i--){
		min = 9999 ;
		for(k=i+1;k<n;k++){
			if((a[i][k]!=0 ) &&  (a[i][k] + c[k]  < min)){	
				min = a[i][k] + c[k];
				d[i] = k;
				c[i] = min ;
			}
		}
	}
	int path[st];
	path[0] = 0;
	path[st-1] = n-1;
	for(i=1;i<st-1;i++){
		path[i] = d[path[i-1]];
	}
	printf("\nPath :");
	for(k=0;k<st;k++){
		printf("%d ",path[k]);
	}
	printf("\ncost :");
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
	printf("D  :");
	for(i=0;i<n;i++){
		printf("%d ",d[i]);
	}
}
int main(){
	int i,j,n;
	printf("Enter size of matrix");
	scanf("%d",&n);
	int adj[n][n],st;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter cost if path %d to %d else 0 :",i+1,j+1);
			scanf("%d",&adj[i][j]);
		}
	}
	int c[n-1],d[n-1];
	for(i=0;i<n;i++){
		c[i] = 0 ;
		d[i] = 0;
	}
	printf("enter stages :");
	scanf("%d",&st);
	lowcost(n,adj,c,d,st);
}
