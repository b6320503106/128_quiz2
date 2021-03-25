#include<stdio.h>
int main()
{
    int n,a[100000],i,x,y,m=0;
    scanf("%d",&n);
    for(i=0;i<100000;i++)
    {
        a[i]=0;
    }
    for(i=0;i<100000;i++)
    {
        if(i<10)
        {
            a[i]=i;
        }else if(i<100&&i>9)
        {
            x=i%10;
            y=i/10;

            if(x==y)
            {
                a[i]=i;
            }
        }else if(i<1000&&i>99)
        {
            x=i%100%10;
            y=i/100;
            if(x==y)
            {
                a[i]=i;

            }
        }else if(i<10000&&i>999)
        {
            x=i%1000%100;
            y=i/1000;
            if(x==y)
            {
                a[i]=i;

            }
        }else if(i<100000&&i>9999)
        {
            x=i%10000%1000;
            y=i/10000;
            if(x==y)
            {
                a[i]=i;

            }
        }

    }
 for(i=0;i<n;i++)
 {
     if(a[i]>0)
     {
         m=m+1;
     }
 }
 printf("%d",m);
}

