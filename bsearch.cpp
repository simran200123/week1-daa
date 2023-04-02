#include<iostream>
using namespace std;
int b_search(int a[],int n,int k,int &count)
{
    int l=0,m,h=n-1;
    while (l<=n)
    { count++;
        m=(l+h)/2;
        if (k==a[m])
        {
            return m;
        }
        if(k<a[m])
        {
          h=m-1;

        }
        if(k>a[m])
        {
            l=m+1;
        }
       
    }
    return -1;
    
}
int main()
{
    int i,k,a[10],n,s;
    cout<<"enter the range"<<endl;
    cin>>n;
    int count=0;
    cout<<"enter the no of elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"enter key"<<endl;
    cin>>k;
    s=b_search(a,n,k,count);
    if(s==-1)
    {
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element is found at index: "<<s<<endl;;
    }
    cout<<"comparisons are :  "<<count<<endl;
    
}