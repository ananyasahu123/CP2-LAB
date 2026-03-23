// Write a program to copy one string to another using pointer. 
 #include <stdio.h>
 #include <string.h>
 main()
 {char str1[20],str2[20];
 char *p1,*p2;
 printf("enter a string");
 gets(str1);
 p1=str1;
 p2=str2;
 while(*p1!='\0')
 {*p2=*p1;
 p1++;
 p2++;
 }
 *p2='\0';
 printf("strings copied=%s",str2);
}

//enter a stringananya10
strings copied=ananya10
