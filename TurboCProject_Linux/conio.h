#ifndef _CONIO_H
#define _CONIO_H

#include <stdio.h>

void clrscr() {
    printf("\033[2J\033[1;1H");
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

#endif
