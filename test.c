#include <stdio.h>
#include <string.h>
union test
{
    /* data */
    int x;
    char arr[4];
    int y;
};

int main()
{
    union test t;
    t.x = 0;
    t.arr[1]='H';
    t.arr[2]='e';

    t.arr[3]='y';
    printf("%d\t%s\t%d",t.x,t.arr,t.y);
    
    
}
