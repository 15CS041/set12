#include<iostream.h>
using namespace std;
int main()
{
int i,j,a[100],n=30,t;
cout<<"Enter the first array:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
for(j=o;j<n-1;j++)
{
if(a[j]<a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
cout<<"%d",<<a[0];
return 0;
}


