/*
 * @Author: Zitian(Daniel) Tong
 * @Date: 2021-02-20 15:53:23
 * @LastEditTime: 2021-02-20 17:07:46
 * @LastEditors: Zitian(Daniel) Tong
 * @Description: 
 * @FilePath: /Tutorial/Tutorial5/Q3.c
 */

#include <stdio.h>
#include <stdlib.h>


int *one() {
  int a = 221;
  return &a;
}

void two() {
  int a = 261;
}

void foo() {
  int *course_num = one();
  two();
  printf("CPSC %d is the best!\n", *course_num);
}


int main(){
    
    int test_array[4] = {0,1,2,3};
    
    printf("result will be : %d\n", add_array(test_array, 4));
    
    return 0;
}