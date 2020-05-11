#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a,b,c,d;
	d = n%10;
	c = (n/10)%10;
	b = (n/100)%10;
	a = n/1000;
	//printf("%d %d %d %d\n",a,b,c,d);
	int m,k;
	m = 10*a+b;
	k = 10*c+d;
	if(m>=8){
		m-=8;
	}else{
		m=(24+m-8);
	}
	if(m==0){
		if(k==0){
			printf("%d",0);
		}else{
			printf("%d",k);
		}
	}else{
		if(k<10){
			printf("%d0%d",m,k);
		}else{
			printf("%d%d",m,k);
		}
	}
	return 0;
}
