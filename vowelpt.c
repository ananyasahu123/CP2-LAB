// Implement a function to count the number of vowels in a string using pointers. 
 #include <stdio.h>
 #include <string.h>
 int countvowels(char*str)
 {int count=0;
 while(*str)
 {if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
 {count++;
 }
 str++;
 }
 return count;
}
int main()
{char str[20];
printf("enter a string:");
gets(str);
printf("number of vowels=%d",countvowels(str));
}

//enter a string:helloworld
number of vowels=3
