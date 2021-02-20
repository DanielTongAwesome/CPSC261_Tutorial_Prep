/*
 * @Author: Zitian(Daniel) Tong
 * @Date: 2021-02-20 17:02:59
 * @LastEditTime: 2021-02-20 17:11:46
 * @LastEditors: Zitian(Daniel) Tong
 * @Description: 
 * @FilePath: /Tutorial/Tutorial5/Q4.c
 */

#include <stdio.h>
#include <stdlib.h>

void bar(int *a) {
  printf("in bar: %d\n", a[0]);
  a = NULL;
}

void foo() {
  int *a = malloc(sizeof(int) * 4);
  a[0] = 3;
  bar(a);
  printf("in foo: %d\n", a[0]);
  free(a);
}

int main(){
    foo();
}