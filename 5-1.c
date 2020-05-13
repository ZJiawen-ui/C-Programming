#include<stdio.h>
#include<math.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    int count = 0;
    for(int x=2;count<m;x++){
        //printf("x=%d ",x);
        int i;
        int flag=1;
        for(i=2;i<x;i++){
            if(x%i==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            count++;
            //printf("count=%d ",count);
            if(count>=n){
                sum+=x;
                //printf("sum=%d\n",sum);
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}

