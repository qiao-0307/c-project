#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//for循环阶乘
int main(){

    uint32_t number;
    uint32_t factorial = 1; //阶乘正着乘也行，初始化为1

    puts("请输入一个正整数,我们将计算此数的阶乘");
    scanf_s("%u",&number);

    for(uint32_t index = number; index >= 1; index--){ //正着来则index初始化为1，中间是判断条件，如果条件错误会直接跳出循环，然后才计次，再循环后两个条件
        factorial *= index;
    }
    printf("%"PRIu32" ! = % "PRIu32"\n",number,factorial);

    return 0;
}
