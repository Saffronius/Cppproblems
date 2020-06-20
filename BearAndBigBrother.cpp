#include<stdio.h>
using namespace std;
int main()
{
    int c=0,fl=1;
    double l,b,s1;
    scanf("%lf%lf",&l,&b);
    s1=l/b;/*We'll divide lemak's weight by bob's and multiply it
            by powers of 1.5(multiplying factor) to make the ratio
             greater than 1*/
    while(fl==1) 
    {
      s1*=1.5;
      c++;
      if(s1>1)
          fl=0;
    }        
    printf("%d",c);
}