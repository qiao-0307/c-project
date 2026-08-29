#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
     

    // 超市折扣案例
int main(void){
    double cart_total;

    bool is_vip;

    double discount_rate = 0.0;
    // 设置
    cart_total = 120;

    is_vip = true;

    // 判断

    if(is_vip) {
        if(cart_total > 100){
            discount_rate = 0.20;
        }
        else {
            discount_rate = 0.05;
        }
    }
    else if(cart_total > 50){
        discount_rate = 0.10;
    }
    else{
        discount_rate = 0.0;
    }
    printf("你的折扣为：%.2f%%\n",discount_rate *100);
    bool is_weather_sunny = true;
    bool is_venue_available = false;

    if (is_weather_sunny && is_venue_available){
        printf("如期举行!\n");
    }
    else{
        printf("活动无法举行!\n");
        if(!is_weather_sunny){
            printf("原因:天气不行");
        }
        if(!is_venue_available){
            printf("原因:场地不可用");
        }
    }
}
