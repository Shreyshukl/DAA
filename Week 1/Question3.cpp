#include<iostream>
using namespace std;
int High(int arr[],int n,int key)
{
    if(arr[0]==key)
    {
        return key;
    }
    int i=1,high,low;
    while(i<n && arr[i]<=key)
    {
        i=i*2;
    }
    return high=min(n-1,i);
}
int Low(int arr[],int n,int key)
{
    if(arr[0]==key)
    {
        return key;
    }
    int i=1,high,low;
    while(i<n && arr[i]<=key)
    {
        i=i*2;
    }
    return low=i/2;
}
int LinearSearch(int arr[],int h,int l,int k)
{
    for(l;l<=h;l++)
    {
        if(l==k)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[25],n,i,y,z,x,key;
    cout<<"enetr limit";
    cin>>n;
    cout<<"enter values";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter key";
    cin>>key;
    z=High(a,n,key);
    x=Low(a,n,key);
    y=LinearSearch(a,z,x,key);
    if(y==1)
    {
        cout<<"key found";
    }
    else
      cout<<"not found";
return 0;
}
