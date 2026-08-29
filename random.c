#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

// 随机数案例   
int main(){
    uint32_t secret_num, guess;

    // 生成随机数
    srand(time(NULL));
    // 生成1-100的随机数
    secret_num = rand() % 100 + 1; //不要漏 % 100
    
    puts("猜猜我想的是哪一个数(1-100)?");

    do {
        puts("请输入你的猜测");
        scanf_s("%d",&guess);

        if (guess< secret_num){
            
            puts("太小了,再试试看");
        }
        else if (guess> secret_num){

            puts("太大了,再试试看");
        }
    }while(guess != secret_num); //while后有分号 guess正常来说需要初始赋值，但是由于do先执行了一遍已有值则不需赋值
    printf("恭喜你猜对了,答案就是%"PRIu32"\n",secret_num); //易漏%
    return 0;
}
