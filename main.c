#include <stdio.h>
#include<math.h>
int main()
{
    int num,sum,digit,onum;
    printf("enter num");
    scanf("%d",&num);
    onum=num;
    while(num>=10){
        sum=0;
        while(num>0){
            digit=num%10;
            sum+=digit;
            num/=10;
        }num=sum;
    }if(num==1){
        printf("%d is a magical number.",onum);
    }else{
        printf("%d is not a magical numbar.",onum);
    }
    return 0;
}
