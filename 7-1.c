#include<stdio.h>
struct {
    int a;
    int b;
}poly[100];

int main() {
    //set two arrays to store the mi and xi
    int mi[100];
    int xi[100];
    int sum = 0;
    int i = 0;
    int j = 0;
    while(sum != 2) {
        scanf("%d %d", &mi[i], &xi[i]);
        if(mi[i] == 0) {
            sum = sum+1;
        }
        i++;
    }
    for(j = 0; j < i; j++) {
        int amount = 0;
        amount += xi[j];
        for(int k = j+1; k < i; k++) {
            if(mi[j] == mi[k]) {
                amount += xi[k];
                mi[k] = 0;
                xi[k] = 0;
            }
        }
        if(amount != 0) {
            poly[j].a = amount;
            poly[j].b = mi[j];
            //printf("%dx%d+",amount,mi[j]);
        }
    }
    //ÅÅÐò
    for(int m=0;m<i;m++){
        int tempa;
        int tempb;
        for(int n=m+1;n<i;n++){
            if(poly[m].b<poly[n].b){
                tempa = poly[m].a;
                tempb = poly[m].b;
                poly[m].a = poly[n].a;
                poly[m].b = poly[n].b;
                poly[n].a = tempa;
                poly[n].b = tempb;
            }
        }
    }
    //output
    for(int m=0;m<i;m++){
        if(poly[m].a!=0){
            if(poly[m].b==1){
                printf("%dx+",poly[m].a);
            }else if(poly[m].b==0){
                printf("%d",poly[m].a);
            }else{
                printf("%dx%d+",poly[m].a,poly[m].b);
            }
        }
    }
    printf("\n");
    return 0;
}

