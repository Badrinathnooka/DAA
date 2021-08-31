#include<stdio.h>
#include<string.h>
#include<math.h>
struct point{
	int x;
	int y;
};
void sort(struct point p[],int st,int end){
	int i,j,pos,temp;
	for(i=st;i<end;i++){
		pos = i;
		for(j=i+1;j<end;j++){
			if(p[pos].x>p[j].x)
				pos = j;
		}
		temp = p[i].x;
		p[i].x = p[pos].x;
		p[pos].x = temp;
		
		temp = p[i].y;
		p[i].y = p[pos].y;
		p[pos].y = temp;
		
	}
}
void close(struct point p[],int st,int end){
	sort(p,st,end);
	int i,m,d,dl,dr,dy;
	if(end-st<=3)
		bruteforce(p,st,end);
	m = (st+end)/2;
	dl = close(p,st,m);
	dr = close(p,m+1,end);
}
int main(){
	int i,j,n;
	printf("Enter number of points :");
	scanf("%d",&n);
	struct point p[n];
	for(i=0;i<n;i++){
		printf("Enter x and y points :");
		scanf("%d %d",&p[i].x,&p[i].y);
	}
	close(p,0,n);
}
