#include<stdio.h>

void floyed(int n,int adj[][n]){
	int i,j,k;
	int path[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			path[i][j] = adj[i][j];	
		}
	}
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(path[i][j]!=1){
					if(path[i][k]==1 && path[k][j]==1){
						path[i][j] = 1;
					}
				}
			}
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",path[i][j]);
		}
		printf("\n");
	}
	}

}

int main(){
	int i,j,n;
	printf("Enter size of matrix");
	scanf("%d",&n);
	int adj[n][n],path[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter 1 if path %d to %d else 0 :",i,j);
			scanf("%d",&adj[i][j]);
		}
	}
	floyed(n,adj);

}
