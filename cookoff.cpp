#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,c,s,e,m,h;
	string str[]={"cakewalk","simple","easy","easy-medium","medium","medium-hard","hard"};
	string input;
	cin>>t;
	while( t-- )
	{
		c=0,s=0,e=0,m=0,h=0;
		int n;
		cin>>n;
		while( n-- )
		{
			cin>>input;
			if(input.compare(str[0])==0)
			 c++;
			else if(input.compare(str[1])==0)
			 s++;
			else if(input.compare(str[2])==0)
			 e++;
			else if(input.compare(str[3])==0 || input.compare(str[4])==0)
			 m++;
			else if(input.compare(str[5])==0||input.compare(str[6])==0)
			 h++; 
		}
		if(c>0 && s>0 && e>0 && m>0 && h>0)
		 cout<<"Yes\n";
		 else
		  cout<<"No\n";
	}
	return 0;
}
