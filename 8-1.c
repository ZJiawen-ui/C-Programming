#include<stdio.h>
#include<string.h>

int main() {
    char str[100] = "";
    int i = -1;
    do {
        i++;
        scanf("%c", &str[i]);
    }while(str[i] != '.');
    printf("str=%s\n", str);
    int len = strlen(str);
    printf("%d\n", len);
    int count = 0;
    int j = 0;
    for(j = 0; j < len; j++) {
        if(j == len-1) {
            printf("%d", count);
            count = 0;
        }else if(str[j] != ' ') {
            count++;
        }else if(str[j] == ' ') {
            if(str[j-1] == ' ') {
                count = 0;
            }else {
                printf("%d ", count);
                count = 0;
            }
        }
    }
    printf("\n");
    return 0;
}

