#include<iostream>
using namespace std;
 int lsearch(int a[],int n,int k, int &count)
{
  int p;
    for(int i=0;i<n;i++)
    {
         count++;
        if(a[i]==k)
        {
            return a[i];

        }
    }
    return -1;
}
int main()
{
    int a[50],i,k;
    int count=0;

    cout<<"enter the range"<<endl;
    int r,n;
    cin>>n;
    cout<<"enter the no.s"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key"<<endl;
    cin>>k;
    r=lsearch(a,n,k,count);
    if(r==-1)
    {
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"key is found at index and no of comparisions are:  "<<r<< endl;
    }
    cout<<"count is: "<<count;
    
}