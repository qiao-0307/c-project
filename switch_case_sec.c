#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


// 状态机，switch case 红绿灯案例
int main(void){

    uint8_t traffic_light_state = 1; //红灯

    switch(traffic_light_state){
    case 0:
        puts("红灯");
        traffic_light_state = 1; // 绿灯转换 重新赋值
        break;
    
    case 1:
        puts("绿灯");
        traffic_light_state = 2; //黄灯
        break;
    case 2:
        puts("黄灯");
        traffic_light_state = 0; //转回红灯
        break;
    default:
        puts("stop");
        break;
    }
    return 0;
}
