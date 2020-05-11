#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int flag=1;
	do{
		printf("%d ",flag);
		flag+=2;
	}while(flag<=n);
	printf("\n");
	return 0;
} 
