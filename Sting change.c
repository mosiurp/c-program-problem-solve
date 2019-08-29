#include<stdio.h>
void main()
{
   int i,len;
   char name[7];
   gets(name);
   len=strlen(name);
   for(i=0; i<len; i++){
    if(name[i]>='a'&&name[i]<='z')
        name[i]=name[i]-32;
    else if(name[i]>='A'&&name[i]<='Z')
        name[i]=name[i]+32;
   }

    printf("\n convert string is = %s",name);
}

