#include <iostream>
using namespace std;

int main() 
{
	int i,j,count=0,a[100],k=0,t,n,fun;
	cin>>t;
	while(t--)
	{
	  cin>>n;
      for(i=2;i<n;i++)
      {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
            
        }
        if(count==2)
            {
                count=0;
                a[k]=i;
                k++;
            }
     }
	
   /* for(i=0;i<k;i++)
     cout<<a[i]<<" ";*/
       for(i=0;i<k;i++)
       {
        for(j=0;j<i;j++)
        {
            if(a[i]+a[j]==n)
             {
               fun=1;
               break;
             }
           else
            fun=0;
        }
      }
       if(fun==1)
             {
               cout<<"Yes\n";
             }
           else
            cout<<"No\n";
	}  
	return 0;
}

