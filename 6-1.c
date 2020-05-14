#include<stdio.h>

int main() {
    //get the input
    int a, b;
    scanf("%d/%d", &a, &b);
    int temp;
    int result[201];
    int i = 0;
    do {
        result[i] = a/b;
        temp = a%b;
        a = temp*10;
        i++;
    }while(temp != 0 && i < 201);
    printf("0.");
    for(int j = 1; j < i-1; j++) {
        printf("%d", result[j]);
    }
    printf("%d\n", result[i-1]);
    return 0;
}

