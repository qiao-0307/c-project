#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// continue案例
int main(){

    int32_t number;

    puts("请输入数字(0-100),输入-1程序结束");

    while(1){
        puts("请输入一个有效数字(0-100)");
        scanf_s("%d",&number);

        if(number == -1){
            break;
        }

        if(number < 0 || number > 100){
            continue;
        }

        if(number % 2 == 0){
            printf("%" PRId32 "是偶数\n",number);
        }
        else{
            printf("%" PRId32 "是奇数\n",number);
        }

    }
    puts("程序结束");

    return 0;
}
