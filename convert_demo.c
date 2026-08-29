#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(){
    // 无符号到有符号转换
    uint16_t uSmallNum = 12345;
    int16_t sSmallNum = (uint16_t)uSmallNum;

    printf("uint16_t: %hu\n",uSmallNum);
    printf("converted to int16_t: %hd\n",sSmallNum);

    // 大范围到小范围
    int32_t mediumNum = 123123123;
    int16_t smalleNum =(int16_t)mediumNum;

    printf("int32_t: %d\n",mediumNum);
    printf("converted to int16_t: %hd\n",smalleNum);
