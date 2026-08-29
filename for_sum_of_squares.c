#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// for循环求平方和
int main(){

    uint32_t number;

    uint32_t sum_of_squares = 0;

    puts("请输入一个整数N,我们将计算从1到N的平方和\n");
    scanf_s("%u",&number);

    // 用来计次的变量，由于程序后续不会用到，因此可以直接在for中的第一条语句定义初始化
    for(uint32_t index = 1; index <= number; index++){

        sum_of_squares += index*index;

    }

    printf("从1到% "PRIu32"的平方和为%"PRIu32"\n",number,sum_of_squares);

    return 0;
}
