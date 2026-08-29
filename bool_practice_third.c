#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
     

   
int main(void){
   // 出门吃饭案例，有优惠卷或者打折才出门吃，否则在家吃
    bool is_discount_available = true;
    bool is_coupon_available = false;

    if(is_coupon_available || is_discount_available){
        printf("出门吃饭\n");
        if(is_coupon_available){
            printf("不在家吃饭原因:有优惠券\n");
        }
        if(is_discount_available){
            printf("不在家吃饭原因:有折扣可用\n");
        }
    }
    else{
        printf("在家吃饭");
    }
    

    // 游戏练习  输出可以用puts() 基本没有问题，优化把else写上就可以
    bool is_VIP = true;
    bool is_special_tool = false;
    uint32_t gold_coin = 15;
    
    if(is_VIP){
        printf("玩家可以进入房间A\n");
    }
    if(gold_coin >= 10 || is_special_tool){
        printf("玩家可以进入房间B\n");
    }
    if(is_VIP && gold_coin >= 20){
        printf("玩家可以进入房间C\n");
    }
    if((is_VIP || is_special_tool) && gold_coin >= 5){
        
        printf("玩家可以进入房间D\n");
        

    }
    
    
    return 0;

}
