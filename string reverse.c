
#include<stdio.h>
#include<string.h>
  int main()
  {
       char str[15],rev_str[15];
       int i,len;
       printf("\n Enter string : ");
       gets(str);
       len=strlen(str);
       for(i=0;i<len;i++)
       rev_str[i]=str[len-i-1];
       rev_str[len]='\0';
       printf("\n reverse string is %s",rev_str);
       return 0;
  }
