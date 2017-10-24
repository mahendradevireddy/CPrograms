#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	int t;
	
	cin>>t;
	while( t-- )
	{
		
		long long int y,i,count=0;;
		cin>>y;
		
		for(long long int b=1;b<=700;b++)
		{
	    	for(long long int a=1;a<INT_MAX;a++)
	     	{
	     		int power=pow(a,2);
	     		if(power+b>INT_MAX)
	     		 break;
			   else if((power+b)<=y)
		       {
		       count++;	
		       }     
		 
		}
		 
	}
	    
		
		 cout<<count<<"\n";
    }
	return 0;
}
