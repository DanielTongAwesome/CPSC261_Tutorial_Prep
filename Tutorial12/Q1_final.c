/*
 * @Author: Zitian(Daniel) Tong
 * @Date: 2021-04-12 16:00:58
 * @LastEditTime: 2021-04-12 16:01:11
 * @LastEditors: Zitian(Daniel) Tong
 * @Description: 
 * @FilePath: /Tutorial/Tutorial12/Q1_final.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>

void sigint_handler(int sig)
{
    write(0, "Ahhh! SIGINT!\n", 14);
}

void sigterm_handler(int sig)
{
    write(0, "Ahhh! SIGTERM!\n", 15);
}

int main(void)
{
    void sigint_handler(int sig); /* prototype */
    char s[200];
    struct sigaction sa_int, sa_term;

    sa_int.sa_handler = sigint_handler;
    sa_int.sa_flags = 0; // or SA_RESTART
    sigemptyset(&sa_int.sa_mask);

    if (sigaction(SIGINT, &sa_int, NULL) == -1) {
        perror("sigaction (sigint)");
        exit(1);
    }

    sa_term.sa_handler = sigterm_handler;
    sa_term.sa_flags = 0; // or SA_RESTART
    sigemptyset(&sa_term.sa_mask);

    if (sigaction(SIGTERM, &sa_term, NULL) == -1) {
        perror("sigaction (sigterm)");
        exit(1);
    }

    printf("Enter a string:\n");

    if (fgets(s, sizeof s, stdin) == NULL)
        perror("fgets");
    else 
        printf("You entered: %s\n", s);

    return 0;
}