#include<stdio.h>
#include<string.h>

int main(){
	int shell[8] = {4,3,2,10,12,1,5,6};
	int len = sizeof(shell)/sizeof(int);

	//find the maximum h
	int h = 1;
	while(h<len/2){
		h = 2*h+1;
	}
	
	int i,j;
	while(h>=1){
		for(i=h;i<len;i++){  //待插入的未排序的元素 
			for(j=i;j>=h;j-=h){
				if(shell[j-h]>shell[j]){
					int temp = shell[j-h];
					shell[j-h] = shell[j];
					shell[j] = temp; 
				}else{
					break;
				}
			}
		}
		h/=2;
	}

	for(i=0;i<len;i++){
		printf("%d ",shell[i]);
	}
	return 0;
}
