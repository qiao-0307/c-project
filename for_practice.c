#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


// for循环
int main(){

    const uint32_t total_laps = 10;// 目标圈数

    puts("跑步者开始跑步");

    // for括号中，两个分号放3个条件，current_lap属于局部变量，要包含迭代点
    for(uint32_t current_lap = 1; current_lap <= total_laps; current_lap++){
        printf("跑步者完成第 %"PRIu32"圈\n",current_lap);
    }
    return 0;
}
