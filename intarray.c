#include <stdio.h>
int main()
{int numb[]={10,20,30,40};
 int *p=numb;
int i;
for(i=0;i<4;i++)
printf("%d",*(p++));
}
