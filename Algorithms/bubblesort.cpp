#include<iostream>
int main()
{
int a[10],c,t,m,n;
n=0;
std::cout<<"Enter 10 numbers: ";
for(c=0;c<10;c++)
  std::cin>>a[c];
for(m=1;m<10;m++)
  {
    if (a[n]>a[n+1])
    {
      t=a[n];
      a[n]=a[n+1];
      a[n+1]=t;
    } 
  }  
std::cout<<"The sorted array is: \n ";
for(c=0;c<10;c++)
  std::cout<<a[c]<<std::endl;
 return 0;
 }
