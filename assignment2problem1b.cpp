include<iostream>
using namespace std;
int main()
{
int i,j,n,m;
cout<<"Number of rows : 9 "<<endl;
cout<<"Number of Coulmns : 7 "<<endl;
n=9;
m=7;

for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{

 if(i==2 && j==2 || i==2 && j==m-1 )
{
cout<<"*";
}
else if(i>2 && i<n-1 && j==1 || i>2 && i<n-1 && j==m)
{
cout<<"*";
}
else if(i==8 && j==2 || i==8 && j==m-1)
{
cout<<"*";
}
if(i==n && j==m-4 || i==n && j==m-3 || i==n && j==m-2 || i==1 && j==m-2 || i==1 && j==m-3 || i==1 && j==m-4)
{
cout<<"*";
}
else
{
cout<<" ";
}
}
cout<<endl;
}
return 0;
}
