#include<stdio.h>
#include<math.h>

int main() {
    int count = 0;
    int number;
    int flag = 0;
    int temp;
    scanf("%d", &number);
    while(number != 0) {
        count++;
        temp = number%10;
        if((count+temp)%2 == 0) {
            int i;
            i = count-1;
            flag = flag+pow(2, i);
        }
        number /= 10;
    }
    printf("%d\n", flag);
    return 0;
}

