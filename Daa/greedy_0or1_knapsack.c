#include<stdio.h>
#include<string.h>
//here k will be left with some kgs left in some cases
int main(){
	int i,j,k,n,pos,temp,t=0;
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("Enter maximum weight bag can carry:");
	scanf("%d",&k);
	int wt[n],val[n];
	float p[n],temp1;
	for(i=0;i<n;i++){
		printf("Enter weight and value :");
		scanf("%d %d",&wt[i],&val[i]);
	}
	for(i=0;i<n;i++){
		p[i] = (float) val[i]/wt[i] ;
	}
	for(i=0;i<n;i++){
		pos = i;
		int f=0;
		for(j=i+1;j<n;j++){
			if(p[pos]<p[j]){
				pos = j;
				f=1;
			}
		}
	if(f==1){
		temp1 = p[pos];
		p[pos] = p[i];
		p[i] = temp1;
		
		temp = wt[pos];
		wt[pos] = wt[i];
		wt[i] = temp;
		
		temp = val[pos];
		val[pos] = val[i];
		val[i] = temp;
	}
	}
	for(i=0;i<n;i++){
		if(k>=wt[i]){
			t = t + val[i];
			k = k-wt[i];
		}
	}

	printf("%d",t);
}
