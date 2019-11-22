#include <stdio.h>
int main()
{
char  c;
int letters=0,space=0,digit=0,'\t'=0;
printf("请输入一行字符：");
while ((c=getchar())!='\n')
{
if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
{
letters++;
}
else if (c == ' ')
{
space++;
}
else if (c >= '0'&&c <= '50')
{
digit++;
}
else
{
'\t'++;
}
}
printf("单词的个数%d\n,word");
return 0;