#include<stdio.h>
#include<stdbool.h>
//placing n queens in n*n matrix 
//example placing 4 queens in 4*4 matrix 
bool issafe(int n,int a[][n],int i,int col){
	int k,l;
	for(k=0;k<col;k++){
		if(a[i][k]==1){
			return false ;
		}
	}
	for(k=col,l=i;k>=0 && l>=0;k--,l--){
		if(a[l][k]==1){
			return false ;
		}
}
	for(k = i,l = col;k<n && l>=0;k++,l--){
		if(a[k][l]==1){
			return false ;
		}
	}
		
	return true ;
}
bool nqueen(int n,int a[][n],int col){
	if(col>=n){
		return true ;
	}
	int i;
	for(i=0;i<n;i++){
		if(issafe(n,a,i,col)){
			a[i][col] = 1;
			
			if(nqueen(n,a,col+1)){
				return true;
			}
			
			a[i][col] = 0;
		}
	}
	return false ;
}
int main(){
	int i,j,n;
	printf("Enter size of matrix :");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j] = 0;
		}
	}
	if(nqueen(n,a,0)){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
	else{
		printf("Error");
	}
}
