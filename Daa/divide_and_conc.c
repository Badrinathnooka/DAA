#include<stdio.h>
#include<string.h>
#include<math.h>
int max(int n1,int n2){
	int c=0,c1=0;
	while(n1!=0){
		n1 = n1/10;
		c = c+1;
	}
	while(n2!=0){
		n2 = n2/10;
		c1 = c1 + 1;
	}
	if(c1>c){
		return c1;
	}
	else{
		return c;
	}
}
int split(int n,int nd){
	int a1,a;
	int k;
	a1 = n/pow(10,nd) ;
	k = pow(10,nd);
	a = n%k ;
	printf("%d %d",a1,a);
	return a1,a ;
}
int mult(int n1,int n2){
	int n,nd,a1,a,b1,b,c,c1,c2;
	if(n1<10 || n2<10){
		return n1*n2;
	}
	n = max(n1,n2);
	nd = n/2 ;
	a1,a = split(n1,nd);
	b1,b = split(n2,nd);
	c = mult(a,b);
	c2 = mult(a1,b1);
	c1 = mult((a+a1),(b+b1))-c-c2;
	//printf("%d %d %d\n",c,c1,c2);
	return (c*pow(10,2*nd)+c1*pow(10,nd) + c);
}
int main(){
	int n1,n2,i,j;
	printf("Enter 2 numbers :");
	scanf("%d %d",&n1,&n2);
	i = mult(n1,n2);
	printf("%d",i);
}
