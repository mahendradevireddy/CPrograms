#include<bits/stdc++.h>
using namespace std;
int subarray(char[],int);
int main()
{
  int t,len;
  char ar[4];	
  cin>>t;
  while(t--)
  {
  	cin>>ar;
  	len=sizeof(ar)/sizeof(ar[0]);
  	cout<<len<<" ";
  	subarray(ar,len);
  	
  }
  return 0;	
}

int subarray(char ar[],int n)
{
	int i,j,k;
	// Pick starting point
    for (int i=0; i<n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++)
                cout << ar[k] << " ";
 
            cout << endl;
        }
    }
}
