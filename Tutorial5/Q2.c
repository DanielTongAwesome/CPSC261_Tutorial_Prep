/*
 * @Author: Zitian(Daniel) Tong
 * @Date: 2021-02-19 22:51:59
 * @LastEditTime: 2021-02-20 15:29:27
 * @LastEditors: Zitian(Daniel) Tong
 * @Description: 
 * @FilePath: /Tutorial/Tutorial5/Q2.c
 */


int add_array(int *array, int n) {
    int sum = 0;
    while (--n >= 0) {
        sum += array[n];
    }
    return sum;
}



int add_array(int *array, int n) {
    int sum = 0;
    while (--n >= 0) {
        sum += *array++;
    }
    return sum;
}