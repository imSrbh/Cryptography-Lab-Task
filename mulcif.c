#include<stdio.h>
int main(){
	int a,x,m;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the modulo number:");
	scanf("%d",&m);
	for(x=0;x<(m-1);x++){
		if((a*x)%m==1)
		printf("%d\n",x);
	}
	return 0;	
}

