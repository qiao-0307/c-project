#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//自动贩卖机案例
int main(void)
{
    // 1.初始化
    const uint32_t PRICE = 5; // 饮料的价格 常量

    uint32_t balance = 0; // 初始账户0元

    uint32_t coin;
    
    // 提示语
    puts("欢迎使用自动贩卖机！ 本机器只提供一种饮料,价格为$5元\n");
    puts("请投币(只接受1,2,5三种硬币):\n");

    while(balance < PRICE){
        puts("钱不够,请投币:");

        // 模拟投币
        scanf("%" PRIu32, &coin);  //

        // 检查投币是否有效
        if(coin == 1 || coin == 2 || coin == 5){
            //计次
            balance += coin; //迭代点 
        }
        else{
            printf("对不起，我们不接受$%"PRIu32"的硬币，请重新投币！\n",coin);
        }
    
    }
    // 找零
    if(balance > coin){
        printf("找回您的零钱$%"PRIu32"\n",balance-coin);
    }
    puts("购买成功,欢迎下次光临\n");

    return 0;
}
