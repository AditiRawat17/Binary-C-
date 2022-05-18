#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10]={10,20,30,40,50,60,70,80,90,100},low=0,high=9,mid,search;
cout<<"enter the value for search";
cin>>search;
while( low<=high)
{
mid=(low+high)/2;
if(a[mid]<search)
{
low=mid+1;
}
else
{
if(a[mid]>search)
{
high=mid-1;
}
else
{
cout<<"value found";
break;
}
}
}
if(low>high)
{
cout<<"value not found";
}
getch();
}
