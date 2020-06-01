#include<stdio.h>
#include <string.h>
#define MAX 10000

int main(){
	char s1[MAX];
	char s2[MAX];
	int m=0,n=0;
	char ch=' ';
	while((ch=getchar())!='\n'){
		s1[m] = ch;
		m++;
	}
	while((ch=getchar())!='\n'){
		s2[n] = ch;
		n++;
	}
//	printf("%s\n",s1);
//	printf("%s\n",s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int flag = 0;
	int i=0,j=0;
	while(j<=len2){
		if(s1[i]=='\0'){
			printf("%d ",j-len1);
			j = j-(len1-1);
			i=0;
			flag = 1;
		}else if(s1[i]==s2[j]){
			i++;
			j++;
		}else if(s1[i]!=s2[j]){
			j = j-i+1;
			i = 0;
		//	printf("j=%d ",j);
		}
	}
	if(flag==0){
		printf("-1\n"); 
		return 0;
	}
	printf("\n");
	return 0;
}
