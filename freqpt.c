//Write a program to find the frequency of a given character in a string using pointers.
#include <stdio.h>
#include<string.h>
int main()
{char str[20],c;
char*p;
int counter=0;
printf("enter charcters in a string:");
gets(str);
printf("enter a character to find the frequency");
scanf("%c",&c);
p=str;
while(*p)
{if(*p==c)
counter++;
p++;
}
printf("frequency of %c=%d",c,counter);
}


//enter charcters in a string:ssssddd
enter a character to find the frequencyd
frequency of d=3
