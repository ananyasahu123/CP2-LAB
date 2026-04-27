// Implement a program to append text to an existing text file. 
 #include<stdio.h>
  #include<string.h>
  int main()
  {FILE*fp;
  char text[20];
  fp=fopen("hello.txt","a");
  if(fp=='\0')
  {
  	printf("file not found");
  	return 1;
  }
  printf("enter text to append it");
  gets(text);
  printf(fp,"%s",text);
  fclose(fp);
  return 0;
  }
