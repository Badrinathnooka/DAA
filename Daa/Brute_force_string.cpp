#include<stdio.h>
#include<string.h>


int main(){
	int i,j,m,n,c=0,f=0;
	printf("Enter size of string :");
	scanf("%d",&m);
	char str[m];
	printf("Enter string :");
	scanf("%s",str);
	printf("Enter size of 2nd string :");
	scanf("%d",&n);
	char sm[n],sm1[n];
	printf("Enter string to search :");
	scanf("%s",sm);
	for(i=0;i<m-n+1;i++){
		for(j=i;j<i+n;j++){
			if(str[j]==sm[j-i]){
				f=1;
			}
			else{
				f=0;
				break;
			}
		}
		if(f==1){
			printf("matched");
			break;
	}
	}
	if(f==0){
		printf("not matched");
	}

	
}
