#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// 优化 只限制于0-9
int main(void){

    uint32_t sum = 0; //初始化和为0
    
    char input;

    puts("请输入一系列数字(0-9)用回车键隔开,我们将计算它们的和,输入q结束");

    while(true){

        puts("请输入一个数字或输入q退出: ");

        scanf(" %c",&input); //%c 前需要空格，可以忽略换行

        if(input == 'q'){
            break;
        }

        // 将输入的字符转化为数字，并且加到总和sum之中
        // '0' ASCII 48, '0'-'9'连续的
        if(input >= '0' && input <= '9'){
            sum += input - '0';
        }
        else{
            printf("无效输入,请输入一个数字或'q'\n");
        }
    }

    printf("求和结果为: % "PRIu32"\n",sum);  //最后的最后记得打印结果
    return 0;
}
