#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// while循环
int main(void){
    const uint32_t TOTAL_LAPS = 10; //初始条件
    
    uint32_t current_lap = 0;

    puts("开始跑圈");

    while(current_lap < TOTAL_LAPS){  //循环体

        current_lap++; //迭代点

        printf("现在已经跑了%"PRIu32"圈\n",current_lap);
    }

    return 0;
}
