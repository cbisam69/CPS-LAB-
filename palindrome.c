#include<stdio.h>
int  main(){
    int num,rev=0,rem;
    
    printf("enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    
        
    }
    if(num=rev)
    printf("no.is a palindrom number\n");
    else
    printf("not a palindrom number\n");
    return 0;
}
