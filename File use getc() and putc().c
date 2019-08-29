#include<stdio.h>
//#include<chinos.h>
void main()
{
    FILE *fb;
    char ch;
    fb=fopen("name.txt","w");
    printf("input line and process EOF\n");
    while((ch=getchar())!=EOF){
        putc('A',fb);
    }
    fclose(fb);
    printf("Output : ");
    fb=fopen("name.txt","r");
    while((ch=getc(fb))!=EOF){
        printf("%c",ch);
        fclose(fb);
        getch();
    }
}
