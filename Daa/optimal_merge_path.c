#include<stdio.h>
#include<stdlib.h>

//output number of comparisons of that two sorted arrays are merging 
int sort(int a[],int n){
	int i,j,min,temp;
	for(i=0;i<n;i++){
		min = i;
		for(j=0;j<n;j++){
			if(a[min]<a[j]){
				min = j;
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
}
}
int main(){
	int i,j,k=0,n;
	printf("Enter number of arrays :");
	scanf("%d",&n);
	int a[n] , b[n];
	for(i=0;i<n;i++){
		printf("Enter array size :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sort(a,n);
		if(a[0]!=999 && a[1]!=999){
			a[0] = a[0]+a[1];
			k = k+a[0];
			a[1] = 999;
		}
	}
	printf("Number of comparisons done to merge these arrays are %d",k);
}
