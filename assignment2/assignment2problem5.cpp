#include<iostream>
using namespace std;

class Rectangle
{
private:
float length,width;
public:
void getVal(float l,float w)
{
length=l;
width=w;
}
int area()
{
if(length>0&&width<20)
{
return (length*width);
}
else
return 0;
}
int perimeter()
{
if(length>=0&&width<=20)
{
return 2*(length+width);
}
else
return 0;
}
};
int main()
{
Rectangle r;
r.getVal(4,5);
int a;
a=r.area();
if(a==0)
cout<<"Invalid Area"<<endl;
else
cout<<"Area : "<<a<<endl;

int p;
p=r.perimeter();
if(p==0)
cout<<"Invalid Area"<<endl;
else
cout<<"Perimeter : "<<p<<endl;
}
