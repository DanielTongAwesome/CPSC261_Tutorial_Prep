/*
 * @Author: Zitian(Daniel) Tong
 * @Date: 2021-04-12 16:01:18
 * @LastEditTime: 2021-04-12 16:01:27
 * @LastEditors: Zitian(Daniel) Tong
 * @Description: 
 * @FilePath: /Tutorial/Tutorial12/Q2_final.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

static int stat3 = 56;
static int stat0;
static int stat1;
static int stat2 = 45;
int glob;

int myfunction(void) {
  return 0;
}

int main(void) {
  int i;
  printf("Global variable : %16p\n", &glob);
  printf("Stat 0          : %16p\n", &stat0);
  printf("Stat 1          : %16p\n", &stat1);
  printf("Stat 2 init     : %16p\n", &stat2);
  printf("Stat 3 init     : %16p\n", &stat3);
  printf("Fixed string    : %16p\n", "hello world!");
  printf("Local variable  : %16p\n", &i);
  printf("Heap variable   : %16p\n", malloc(sizeof(int)));
  printf("User function   : %16p\n", &myfunction);
  printf("Library global  : %16p\n", &errno);
  return 0;
}
