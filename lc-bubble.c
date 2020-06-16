#include<stdio.h>
#include<string.h>

int main(){
	int bubble[6] = {6,5,4,3,2,1};
	int len = sizeof(bubble)/sizeof(int);
	int i,j;
	for(i=len-1;i>=0;i--){  
		for(j=0;j<=i-1;j++){
			if(bubble[j]>=bubble[j+1]){
				int temp = bubble[j+1];
				bubble[j+1] = bubble[j];
				bubble[j] = temp;
			}
		} 
	}
	for(i=0;i<len;i++){
		printf("%d ",bubble[i]);
	}
	return 0;
}
