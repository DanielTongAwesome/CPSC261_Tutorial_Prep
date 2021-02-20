/*
 * @Author: Zitian(Daniel) Tong
 * @Date: 2021-02-19 16:21:36
 * @LastEditTime: 2021-02-19 22:35:49
 * @LastEditors: Zitian(Daniel) Tong
 * @Description: 
 * @FilePath: /Tutorial/Tutorial3/Q1.c
 */

#include <stdio.h>

int main(void) {
    int x,y,z;
    int *ip1, *ip2, *ip3;
    int **ipp1, **ipp2, **ipp3;
    
    x = 100;    // x = 100
    y = 20;     // y = 20
    z = 50;     // z = 50
    
    ip1 = &x;   // storing x variable address in pointer ip1
    ip2 = &y;   // storing y variable address in pointer ip2
    ip3 = &z;   // storing z variable address in pointer ip3
    
    ipp1 = &ip1;    // storing ip1 pointer address in pointer ipp1
    ipp2 = &ip2;    // storing ip2 pointer address in pointer ipp2
    ipp3 = &ip3;    // storing ip3 pointer address in pointer ipp3

    // check here 
    // for x
    printf("\n============================== checkpoint 1 ===================================\n\n");
    printf("ipp1(%p) -------> ip1(%p) -------> &x(%p) \n", &ipp1, &ip1, ip1);
    printf("%25c %28c \n", '|','|');
    printf("%18s %p  %14s %p \n\n\n", "points", &*ipp1, "points", ip1);
    // for y
    printf("ipp2(%p) -------> ip2(%p) -------> &y(%p) \n", &ipp2, &ip2, ip2);
    printf("%25c %28c \n", '|','|');
    printf("%18s %p  %14s %p \n\n\n", "points", &*ipp2, "points", ip2);
    // for z
    printf("ipp3(%p) -------> ip3(%p) -------> &z(%p) \n", &ipp3, &ip3, ip3);
    printf("%25c %28c \n", '|','|');
    printf("%18s %p  %14s %p \n\n\n", "points", &*ipp3, "points", ip3);


    **ipp2 = **ipp1;
    *ipp1 = *ipp3;
    **ipp1 = 40;
    
    // check here 
    // for x
    printf("\n============================== checkpoint 2 ===================================\n\n");
    printf("ipp1(%p) -------> ip1(%p) -------> &x(%p) \n", &ipp1, &ip1, ip1);
    printf("%25c %28c \n", '|','|');
    printf("%18s %p  %14s %p \n\n\n", "points", &*ipp1, "points", ip1);
    // for y
    printf("ipp2(%p) -------> ip2(%p) -------> &y(%p) \n", &ipp2, &ip2, ip2);
    printf("%25c %28c \n", '|','|');
    printf("%18s %p  %14s %p \n\n\n", "points", &*ipp2, "points", ip2);
    // for z
    printf("ipp3(%p) -------> ip3(%p) -------> &z(%p) \n", &ipp3, &ip3, ip3);
    printf("%25c %28c \n", '|','|');
    printf("%18s %p  %14s %p \n\n\n", "points", &*ipp3, "points", ip3);


    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
}