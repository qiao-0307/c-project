#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


//break的运用
// 用户输入一系列数字，用回车隔开，输入0时结束，然后所有数相加，计算结果
int main (void){
    
    uint32_t sum = 0;

    uint32_t number;

    while(true){

        puts("请输入一个数字: ");
        // scanf_s 重新赋值，从输入的地方重新给number赋值
        scanf_s("%" PRIu32,&number);

        if(number == 0){
            break;
        }

        sum += number;
    }
    printf("所求和为sum是 % "PRIu32"\n",sum);
    return 0;
}
