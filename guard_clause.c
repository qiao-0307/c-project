#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// 卫语句
// 租车案例，超过21岁且驾龄一年以上才行
int main(void){
    
    uint8_t age = 23;
    uint8_t driving_exp_years = 2;

    if(age < 21){
        puts("不租,年龄不足");
        return 0;
    }
    
    if(driving_exp_years < 1){
        puts("不租,经验不足");
        return 0;
    }

    puts("可租借");

    return 0;
}
