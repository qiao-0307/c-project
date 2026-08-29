#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <windows.h>

// 倒数
int main(){

    uint32_t start_number;

    puts("请输入一个正整数,我们开始倒数到1\n");
    scanf_s("%u",&start_number);

    puts("倒数开始\n");

    for(uint32_t index = start_number; index > 0; index--){

        printf("% "PRIu32"\n",index);
        Sleep(1000); //延迟效果，引用<windows.h>头文件
    }
    puts("倒数结束\n");

    return 0;
}
