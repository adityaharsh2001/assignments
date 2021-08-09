#include<stdio.h>
#include <stdlib.h>
void swap (int **p1, int **p2) {
    
    int *x = &p1;
    int *y = &p2;
    int t;

    t = x;
    x = y;
    y = t;    
}
int main() {
    int a = 10;
    int b = 20;

    int *p1= &a;
    int *p2 = &b;
    swap (&p1,&p2);
    printf("%d, %d\n", *p1, *p2);
    return 0;
}