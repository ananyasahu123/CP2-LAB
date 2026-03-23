// Implement a function to compare two strings using pointers. 
#include <stdio.h>
 #include <string.h>
int compare(char*s1,char*s2)
 { 
 while(*s1&&*s2)
 {
 if(*s1=*s2)
 
 s1++;
 s2++;
 }
 return (*s1=='\0'&&*s2=='\0');
 }
 int main()
 {char s1[20],s2[20];
 printf("enter the first string");
 gets(s1);
 printf("enter the second string");
 gets(s2);
 if(compare(s1,s2))
 
 printf("strings are equal");
 else 
 printf("strings are not equal");

}

//enter the first stringhelo1
enter the second stringhi2
strings are not equal
