#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

     
    // 电路练习
int main(void){

    uint8_t status = 0b00001100;  //初始状态

    printf("Initial status: 0b");
    print_binary(status);
    printf("\t(Binary)\n");
   
    


    status = status & 0b11111011; // 按位与 都是1才得1
    printf("关闭低电量灯: 0b");
    print_binary(status);
    printf("\t(Binary)\n");

    status = status ^ 0b00001011;  // 按位异或 1和0同时存在才为1； |：按位或 有1即为1
    printf("一切正常: 0b");
    print_binary(status);
    printf("\t(Binary)\n");
}
