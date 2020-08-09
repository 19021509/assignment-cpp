#include<iostream>
using namespace std;
int main()
{
int i,j,n,m;
cout<<"Enter number of rows : "<<endl;
cin>>n;
cout<<"Enter number of columns : "<<endl;
cin>>m;
for(i=1;i<=n*n;i++)
{
for(j=1;j<=m;j++)
{
if(j==n)
{
cout<<"*";
}
else if(j==n-1 && i==n-1 || i==n-1 && j==m-1)
{
cout<<"*";
}
else if(j<m+1 && i==n )
{
cout<<"*";
}
else
{
cout<<" ";
}
}
cout<<"\n";
}
return 0;
}

