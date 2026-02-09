//Create a program to find the length of a string using strlen
#include <stdio.h>
#include <string.h>
int main()
{int res;
char a[20];
printf("Enter a string:");
gets(a);
res=strlen(a);
printf("%d",res);

}
