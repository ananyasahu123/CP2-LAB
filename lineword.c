//Write a program to count the number of lines, words, and characters in a given text file
 #include<stdio.h>
 int main()
 {
 	FILE*fp;
 	char ch;
 	int chars=0,words=0,lines=0;
 	fp=fopen("data.txt","r");
 	if(fp='\0')
 {
 	printf("file not found");
 	return 1;
 }
 while((ch=fgetc(fp))!=EOF)
 {chars++;
 if(ch==32||ch=='\n')
 words++;
 if(ch=='\n')
 lines++;
 }
 if(ch>0)
 words++;
 printf("characters=%d\n",chars);
 printf("words=%d\n",words);
  printf("lines=%d\n",lines);
  fclose(fp);
  return 0;
}
