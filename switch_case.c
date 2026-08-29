#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


// switch case 练习语句 

int main(void){

    uint8_t role = 2;
    uint8_t compileted_tasks = 6;
    bool is_manager_approved = false;
    bool accessed_allow = false;

    switch(role){
    case 1: // role1 manager
        accessed_allow = true;
        break;
    case 2:
        if(compileted_tasks > 5){
            accessed_allow = true;
        }
        break;
    case 3:
        if(compileted_tasks > 10 && is_manager_approved){
            accessed_allow = true;
        }
        break;

    default: // 必须放在switch case 的大括号里面
        accessed_allow = false;
        break;
    }

    if(accessed_allow){
        puts("允许访问");
    }
    else{
        puts("禁止访问");
    }
    
    return 0;
}
