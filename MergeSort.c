#include <stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
int mergeSort(int[],int,int);
int merge(int[],int,int,int);
int main()
{
int a[10],i;
for(i=0;i<10;i++)
{
cin>>a[i];

}
mergeSort(a,0,9);
for(i=0;i<9;i++)
cout<<a[i]<<"\n";
return 0;
}
int mergeSort(int a[], int p, int r)
{
int q;
if (p<r)
{
q = (p+r)/2;
mergeSort(a,p,q);
mergeSort(a, q+1, r);
merge(a,p,q,r);
}

return 0;
}

int merge(int arr[], int p, int q, int r)
{
int n = q-p+1;
int m = r-q;

int L[n+1];
int R[m+1];
int i,j,k;

for(i=0; i< n; i++)
{
L[i] = arr[p+i];
}
for(j=0; j< m; j++)
{
R[j] = arr[q+j+1];
}

L[n]=1000;
R[m]=1000;

i = 0;
j = 0;
for(k = p; k<= r; k++)
{

if( L[i]<=R[j])
{
arr[k] = L[i];
i = i+1;
}
else
{
arr[k] = R[j];
j = j+1;

}
}
return 0;
}
