#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,i,c;
 
 cin>>t;
  while(t--)
  {
   int arr[26]={0};
   string s;
   cin>>s;
    for(i=0;i<s.length();i++)
    {
     arr[s[i]-'a']++;
    }
     c=0;
    for(i=0;i<26;i++)
    {
     if(arr[i]>0)
      c++;
    }
    cout<<c<<"\n";
     
   }
   return 0;
 } 
