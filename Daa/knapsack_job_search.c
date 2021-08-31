#include<stdio.h>
#include<string.h>
int min=9999;
void job(int b[][4],int n,char a[]){
	int i,j,k,c=0;
	for(i=0;i<n;i++){
		k = (int)(a[i])-97;
		printf("%d  ",k);
		c = c + b[i][k];
	}
	if(min>c){
		min = c;
	}
}
void permutate(char *a,int l,int r,int b[][4]){
	int i,temp,n;
	n = strlen(a);
	if(l==r && n==r)
		job(b,r,a);
	for(i=l;i<=r;i++){
		temp = a[l];
		a[l] = a[i];
		a[i] = temp;
		
		permutate(a,l+1,r,b);
		
		temp = a[l];
		a[l] = a[i];
		a[i] = temp;
	}
		
}
int main(){
	int i,j,n;
	printf("Enter number of jobs :");
	scanf("%d",&n);
	char b[]="abcd";
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter man %d for job %d",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	permutate(b,0,n,a);
	printf("min = %d",min);
}
