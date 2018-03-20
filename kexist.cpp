#include<iostream.h>
using namespace std;
int main()
{
int k,n,a[100];
cin>>"%d">>"%d",>>&n>>&k;
for(i=0;i<n;i++)
{
cin>>"%d",>>&a[i];
}
for(i=0;i<n;i++)
{
if(a[i]=k)
{
cout<<"exit array is %d"<<k;
return 0;
}
}
cout<<"no exit";
}
