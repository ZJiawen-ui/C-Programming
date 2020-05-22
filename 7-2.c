#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int matrix[n][n];
    
    int flag = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    int tempi,tempj;
    int min;
    int max;
    int a,b;
    for(int j=0;j<n;j++){
        min=matrix[0][j];
        tempi=0;
        tempj=j;
        for(int i=1;i<n;i++){
            if(matrix[i][j]<min){
                min = matrix[i][j];
                tempi=i;
                tempj=j;
            }
        }
        max = matrix[tempi][0];
        a = tempi;
        b = 0;
        for(int j=1;j<n;j++){
            if(matrix[tempi][j]>max){
                max = matrix[tempi][j];
                b = j;
            }
        }
        if(tempj==b){
            printf("%d %d\n",tempi,tempj);
            flag = 1;
        }
    }
    if(flag==0){
        printf("No\n");
    }
    return 0;
}

