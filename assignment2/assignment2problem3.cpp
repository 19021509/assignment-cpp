#include<iostream>
#include<string>
using namespace std;

//GradeBook class defination

class Date{
int day,month,year;
public:
int func(int d,int m,int y)
{
day=d;
month=m;
year=y;
if(year<0){
return 1;
}
if(month<0 || month>12)
{return 1;

}
if(month==2)
{
if(year%4==0)
{
if(day>29 || day<0)
return 1;
}
else
{
if(day>28 || day<0)
return 1;
}
}
else if( month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
{
if(day>31 || day<0)
return 1;
}
else
{
if(day>30 || day<0)
return 1;
}
return 0;
}
void show()
{
cout<<day<<"/"<<month<<"/"<<year<<endl;
}
};
int main()
{
int ret =0;
Date p;
ret=p.func(10,10,20);
if(ret==0)
cout<<"Given Date is Valid"<<endl;
else
cout<<"Given Date is Invalid"<<endl;
}
