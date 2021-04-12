/*
 * @Author: Zitian(Daniel) Tong
 * @Date: 2021-02-20 15:53:23
 * @LastEditTime: 2021-02-22 15:23:44
 * @LastEditors: Zitian(Daniel) Tong
 * @Description: 
 * @FilePath: /Tutorial/Tutorial5/Q3.c
 */

#include <stdio.h>
#include <stdlib.h>

/*
Result:

CPSC 261 is the best!

This code presents a dangling pointer in function one, 
which returns a pointer to a local variable that will be deallocated 
as soon as the function returns. 
If we assume no compiler optimisations, 
both variables a in one and two will be saved in the same stack location, 
so the program will print:

*/

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
