#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	
	cin>>t;
	while( t-- )
	{
		
		int n,k,i;
		cin>>n>>k;
		vector<int> a(n);
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	    
		sort(a.begin(),a.end());
		
		
		 cout<<a[(n+k)/2]<<"\n";
    }
	return 0;
}
