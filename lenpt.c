 //Write a program to calculate the length of a string using pointers.
 #include <stdio.h>
 #include <string.h>
 main()
 {char str[10];
 char *p;
 int l=0;
 printf("enter a string:\n");
 gets(str);
 p=str;
 while(*p!='\0')
 {l++;
 p++;
 }
 printf("length of the string is %d",l);
 }
 
// enter a string:
annaya
length of the string is 6
