#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void){
    int a = 10;
    int b = 20;

    bool greater = a > b;
    printf("a > b: %s\n",greater ? "True" : "False");

    bool less = a < b;
    printf("a < b: %s\n",less ? "True" : "False");

    bool equal = a == b;
    printf("a == b : %s\n",equal ? "True" : "Flase");

    bool not_equal = a != b;
    printf("a != b: %s\n",not_equal ? "True" : "False");

    bool greater_or_equal = a >= b;
    printf("a >= b: %s\n",greater_or_equal ? "True" : "False");

    bool less_or_equal = a <= b;
    printf("a <= b: %s\n",less_or_equal ? "True" : "False");
}
