#include <stdio.h>
#include <string.h>
void main()
{ char a[50];
 int i;
 printf("enter a string:");
 gets(a);
 for (i=0;a[i]!='\0';i++)
 {
 	if (a[i]==' ')
 	a[i]='-';
 }
 printf("%s",a);
}
