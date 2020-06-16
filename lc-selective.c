#include<stdio.h>
#include<string.h>

int main(){
	int selective[10] = {6,5,4,7,9,8,3,2,1,10};
	int len = sizeof(selective)/sizeof(int);

	int i,j;
	int min;
	for(i=0;i<len-1;i++){
		min = i;
		for(j=i+1;j<len;j++){
			if(selective[min]>=selective[j]){
				min = j;
			}
		}
		int temp = selective[i];
		selective[i] = selective[min];
		selective[min] = temp; 
	}

	for(i=0;i<len;i++){
		printf("%d ",selective[i]);
	}
	return 0;
}
