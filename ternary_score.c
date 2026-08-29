#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// ? : 代替if else 
int main(void){
    uint32_t score = 85;

    char grade;

    grade = (score > 90) ? 'A' :
            (score > 80) ? 'B' :
            (score > 70) ? 'C' : 'D';

    printf("得分: %u ,等级: %c\n",score,grade);
    return 0;
}
