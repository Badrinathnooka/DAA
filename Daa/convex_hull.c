#include<stdio.h>
#include<string.h>

struct cordinate{
	int x;
	int y;
};

int main(){
	int i,j,k,n,a,b,d,m,cnt=0;
	printf("Enter number of points :");
	scanf("%d",&n);
	int h[n],p=0;
	struct cordinate c[n];
	for(i=0;i<n;i++){
		printf("Enter x and y points :");
		scanf("%d %d",&c[i].x,&c[i].y);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			int f=0,f1=0;
			a = c[j].y - c[i].y;
			b = c[i].x - c[j].x;
			d = (c[i].x*c[j].y)- (c[j].x*c[i].y);
			for(k=0;k<n;k++){
				if(k!=i && k!=j){
					m = a*c[k].x + b*c[k].y;
					if(m>d){
						f = f+1;
					}
					else if(m<d){
						f1 = f1 +1;
					}
				}
			}
			if(f1==n-2 || f==n-2){
				h[p] = i;
				h[p+1] = j;
				p=p+2;
			}
		}
	}
	printf("%d\n",p);
	i=0;
	while(i<p+1){
		printf("%d %d\n",h[i],h[i+1]);
		i=i+2;
	}
}
