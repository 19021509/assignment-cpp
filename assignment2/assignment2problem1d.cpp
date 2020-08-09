#include <iostream>

using namespace std;
int main()
{
int i,j,rows;
cout<<"Enter the number of rows: \n";
cin>>rows;
for(i=1; i<=rows; i++)
{
for(j=rows; j>i; j--)
{
cout<<" ";
}
cout<<"*";
for(j=1; j<(i-1)*2; j++)
{
cout<<" ";
}
if(i==1)
{
cout<<"\n";
}
else
{
cout<<"*\n";
}
}
for(i=rows-1; i>=1; i--)
{
for(j=rows; j>i; j--)
{
cout<<" ";
}
cout<<"*";
for(j=1; j<(i-1)*2; j++)
{
cout<<" ";
}
if(i==1)
{
cout<<"\n";
}
else
{
cout<<"*\n";
}
}
return 0;
