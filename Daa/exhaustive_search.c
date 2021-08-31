#include<stdio.h>
#include<string.h>
void permutate(char *a,int l,int r){
	int i,temp,n;
	n = strlen(a);
	if(l==r && n==r)
		printf("%s\n",a);
	for(i=l;i<=r;i++){
		temp = a[l];
		a[l] = a[i];
		a[i] = temp;
		
		permutate(a,l+1,r);
		
		temp = a[l];
		a[l] = a[i];
		a[i] = temp;
	}
		
}
int main(){
	int i,j,k,c,n,temp;
	printf("Enter size :");
	scanf("%d",&n);
	char a[n],b[n];
	printf("Enter string :");
	scanf("%s",a);
	permutate(a,0,n);
}
