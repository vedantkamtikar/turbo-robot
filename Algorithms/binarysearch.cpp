
#include <iostream>
int main() 
{
    int a[10],c,t,m,n,num;
    int beg,mid,end;
    std::cout<<"Enter 10 numbers \n";
    for(c=0;c<10;c++)
        std::cin>>a[c];
     std::cout<<"Enter the number"; 
     std::cin>>num;

    for(m=1;m<10;m++)
    {
        for(n=0;n<(10-m);n++)
        {
            if (a[n]>a[n+1])
            {
                t=a[n];
                a[n]=a[n+1];
                a[n+1]=t;
            }  

        }

    }
std::cout<<"The sorted array is \n";
for(c=0;c<10;c++)
    std::cout<<a[c]<<"\n";
beg=0;
end=9;
mid=int((beg+end/2));
while ((beg<=end)&&(a[mid]!=num))
{
    if (num<a[mid])
      end=mid-1;
    else
      beg=mid+1;
    mid=int((beg+end)/2);
}
  if (a[mid]==num)
  std::cout<<"The number is found at location" <<mid;
  else std::cout<<"Not found";
return 0;
}
