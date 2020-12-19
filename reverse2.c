#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(int x) {
    long long i = 0;
    //int j = 0;
    //int str[12];   //  为什么长度是12，因为int是4个字节，换成整数是11位
    int k = 0;   // 循环的次数
    long long num = 0;  //  最后的结果
    int flag = 0;  //对于负数，做了一个取反的处理，给一个标识

    if (x < 0) {
        i = 0 - (long)x;
        //printf("i:%d\n", i);
        flag = 1;
    }

    if (x > 0) {
        i = x;
    }
    int flag1 = 0;
    while(i >= 10) {
        flag1 = 1;
        k = i % 10;
        i = i / 10;
        //k++;
        //j++;
        num = num * 10 + k;
        //printf("j:%d\n", j);
    }
    //str[j] = i;
    /*for(i = 0; i <= k; i++) {
        //printf("str:%d\n", str[i]);
        num = num * 10 + str[i];
    }*/
    num = num * 10 + i;
    if (flag == 1) {
        num = 0 - num;
    }

    if ((num > 2147483647) || (num < -2147483648)) {
        num = 0;
    }

    //printf("num:%d\n", num);
    return num;
}

int main() {
    int i = 0;
    int x = -123;
    //int x = 1534236469;
    //int x = -2147483648;
    i = reverse(x);
    printf("i:%d\n", i);
    return 0;
}