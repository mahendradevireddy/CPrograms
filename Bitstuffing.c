#include <iostream>
using namespace std;

int main() {
int length,consec,i,count=0,j=0,k=0;
char a[100],d[100];
cin>>length;
cin>>consec;
for(i=0;i<length;i++)
{
cin>>a[i];

}
a[i]='\0';
i=0;
while(a[i]!='\0')
{
d[j]=a[i];
j++;
if(a[i]=='1')
{
count++;

}
else
count=0;
if(count==consec)
{
count=0;
d[j]='0';
j++;
k++;
}
i++;

}
// cout<<"k+l: "<<length<<"\n";
d[j]='\0';
j=0;
while(j<length+k)
{
cout<<d[j];
// cout<<"\n";
j++;
}
return 0;
}
