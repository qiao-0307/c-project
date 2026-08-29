#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// 检查素数，用到平方根 
int main(){

    uint32_t num;

    bool is_prime = true;

    puts("请输入一个正整数,除了0和1之外,我们将检查它是否为素数");

    scanf_s("%" SCNu32, &num);

    if(num <= 1){
        is_prime = false;
    }
    else{
        // for，检查除1和它本身以外的因数
        for(uint32_t i = 2; i * i <= num; i++){
            if(num % i == 0){
                is_prime = 0;
                printf("%" PRIu32" 该数不是素数",num);
                break;
            }
        }
    }
    return 0;
}
