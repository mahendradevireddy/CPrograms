#include <stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
bool isvowel(char);
int main()
{
int i,c=0,j,t;
char s[100],temp;
cin>>t;
while(t--)
{
i=0;
cin>>s;
j=strlen(s)-1;
while(i<j)
{
while(i<j && !isvowel(s[i]))
i++;
while(i<j && !isvowel(s[j]))
j--;

temp=s[i];
s[i]=s[j];
s[j]=temp;
i++;
j--;


}
cout<<s<<"\n";

}
return 0;
}
bool isvowel(char c)
{
return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
