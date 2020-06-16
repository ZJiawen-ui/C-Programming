#include<stdio.h>
#include<string.h>

int main(){
	int insertion[8] = {4,3,2,10,12,1,5,6};
	int len = sizeof(insertion)/sizeof(int);

	int i,j;
	int flag;
	for(i=1;i<len;i++){
		flag = i;
		for(j=i-1;j>=0;j--){
			if(insertion[flag]<=insertion[j]){
				int temp = insertion[flag];
				insertion[flag] = insertion[j];
				insertion[j] = temp;
				flag = j;
			}
		}
	}

	for(i=0;i<len;i++){
		printf("%d ",insertion[i]);
	}
	return 0;
}
