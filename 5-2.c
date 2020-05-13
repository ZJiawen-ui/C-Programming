#include<stdio.h>
#include<math.h>

int main() {
    //get the range
    int number;
    scanf("%d", &number);
    if(number<0){
        printf("fu ");
        number = (-1)*number;
    }
    //get the last digit
    int last = number%10;
    number /= 10;
    //set an array to store the digit
    int store[6];
    int i = 0;
    int count = 0;
    while(number != 0) {
        store[i] = number%10;
        number /= 10;
        i++;
        count++;
    }
    //printf("%d ",count);
    count -= 1;
    for(int m = count; m >= 0; m--) {
        //printf("%d ",m);
        switch(store[m]) {
            case 0:
            printf("ling ");
            break;
            case 1:
            printf("yi ");
            break;
            case 2:
            printf("er ");
            break;
            case 3:
            printf("san ");
            break;
            case 4:
            printf("si ");
            break;
            case 5:
            printf("wu ");
            break;
            case 6:
            printf("liu ");
            break;
            case 7:
            printf("qi ");
            break;
            case 8:
            printf("ba ");
            break;
            case 9:
            printf("jiu ");
            break;
            default:
            break;
        }
    }
    switch(last) {
        case 0:
        printf("ling\n");
        break;
        case 1:
        printf("yi\n");
        break;
        case 2:
        printf("er\n");
        break;
        case 3:
        printf("san\n");
        break;
        case 4:
        printf("si\n");
        break;
        case 5:
        printf("wu\n");
        break;
        case 6:
        printf("liu\n");
        break;
        case 7:
        printf("qi\n");
        break;
        case 8:
        printf("ba\n");
        break;
        case 9:
        printf("jiu\n");
        break;
        default:
        break;
    }
    return 0;
}

