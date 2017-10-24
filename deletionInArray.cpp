#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t,n,i,a[10],c=0,temp;
    
	 cin>>n;
	 t=n;
	 while(n--)
	 {
	     cin>>a[i++];
	 }
	 n=t;
	 c=0;
	 for(i=3;i>0;i--)
	 {
	 	temp=a[i];
	 	a[i]=a[(i+1)%n];
	 	a[(i+1)%n]=temp;
	 	c++;
	 	if(c==n)
	 	 break;
	 }
	 cout<<"After rotaion";
	 cout<<"\n";
	 for(i=0;i<n;i++)
	 {
	 	cout<<a[i]<<" ";
	 }
	 for(i=0;i<n-1;i++)
	 {
	 	a[i]=a[i+1];
	 }
	 n--;
	 cout<<"After deletion";
	 cout<<"\n";
	 for(i=0;i<n;i++)
	 {
	 	cout<<a[i]<<" ";
	 }


  return 0;
}


