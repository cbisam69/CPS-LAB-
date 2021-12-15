#include<stdio.h>
int main()
{
    int i,x=0,y;// y is the number &x is count of number of times y is divisible
    printf("enter the number\n");
    scanf("%d",&y);
for(i=1;i<=y;i++)
{
    x++;
    
}
if(x==2)
printf("its is a prime no");
else
printf("ITS NOT A Prime");
return 0;
}
