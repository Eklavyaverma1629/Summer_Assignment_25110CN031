#include<stdio.h>
int main(){
    int num,sum=0;
    printf("ENTER NUMBER");
    scanf("%d",&num)
    int x=num;

    while(x!=0){
        sum+=x%10;
        x=x/10;
    }
    printf("sum of digits of number %d is %d",num,sum);
    return 0;
}