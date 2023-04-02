#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int jumpsearch(int a[],int n,int key)
{
    int start=0;
    int end=sqrt(n);
    while(a[end]<=key&&start<n)
    {
        start=end;
        end=end+sqrt(n);
        if(end>n-1)
        {
            end=n;
        }
    }
    for(int i=start;i<=end;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
return -1;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int key=5;
    int j=jumpsearch(a,n,key);
    
        cout<<" the key is found at index  "<<j;
    
}