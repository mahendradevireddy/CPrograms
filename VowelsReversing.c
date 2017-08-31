#include <stdio.h>
#include<string.h>

int main() {
int t;
char s[10000],a[10000];
int n,i,j=0;
scanf("%d",&t);
while(t--)
{
scanf("%s",s);
n=strlen(s);
j=0;
for(i=0;i<n;i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u')
a[j++]=s[i];
}
j=j-1;
for(i=0;i<n;i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u')
s[i]=a[j--];
}
printf("%s\n",s);
}
return 0;
}
