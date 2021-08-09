#include <stdio.h>
#include <string.h>
void hello();
int main()
{
    char str1[]="DTU ";
    char str2[15]= "DELHI ";
    strcat(str2, str1);
    printf("%s", str2); 

    printf("%s", str1);
    return 0;

}