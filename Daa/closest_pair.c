#include<stdio.h>
#include<string.h>
#include<math.h>
struct cordinate{
	int x;
	int y;
};
int main(){
	int i,j,n,ind1,ind2,min,d;
	 printf("Enter number of points :");
	 scanf("%d",&n);
	 struct cordinate c[n];
	 for(i=0;i<n;i++){
	 	printf("Enter x and y cordinate of point :");
	 	scanf("%d %d",&c[i].x,&c[i].y);
	 }
	 min = 99999;
	 for(i=0;i<n-1;i++){
	 	for(j=i+1;j<n;j++){
	 		d = sqrt(pow((c[i].x - c[j].x),2) +pow((c[i].y - c[j].y),2));
	 		if(d<min){
	 			min = d;
	 			ind1 = i;
	 			ind2 = j;
			 }
		 }
	 }
	 printf("%d",min);
	 printf("%d %d",ind1,ind2);
	 
}
