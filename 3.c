#include<stdio.h>

int main(){
	int number;
	int odd=0,even=0;
	scanf("%d ",&number);
	while(number!=-1){
	    if(number%2==1){
	        odd++;
	    }else if(number%2==0){
	        even++;
	    }
	    scanf("%d ",&number);
	}
	printf("%d %d\n",odd,even);
	return 0;
} 
