#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,easy=0,hard=0,nop,participants,a;
	cin>>t;
	while ( t-- )
	{
		easy=0,hard=0;
		 
		cin>>nop>>participants;
		
		 
		 
	for(i=0;i<nop;i++)
		{
			
			cin>>a;
			if( a >= participants/2 )
			{
			 easy++;	
			}
			else if( a <= participants/10 )
			{
			  hard++;	
			}
			
		}
		//cout<<"Easy: "<<easy<<"hard: "<<hard<<"\n";
		if(easy==1 && hard==2)
		 cout<<"yes"<<endl;
		 
		 else
		  cout<<"no"<<endl;
	 } 
	return 0;
}
