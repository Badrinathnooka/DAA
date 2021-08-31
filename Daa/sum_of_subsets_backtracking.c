#include<stdio.h>

int main(){
	int i,t,n,p=0,k,r=0;
	printf("Enter size of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element :");
		scanf("%d",&a[i]);
		r=r+a[i]; 
	}
	printf("Enter target value :");
	scanf("%d",&t);
	sos(n,t,a,);
}
