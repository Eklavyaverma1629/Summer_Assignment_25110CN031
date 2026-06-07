#include<stdio.h>
#include<math.h>
int main(){
    int num,digit=0,sum=0,x;
    printf("ENTER  POSITIVE NUMBER");
    scanf("%d",&num);
    x=num;
    while("x!=0"){
        digits++;
        x/=10;
    }
    x=num;
    while(x!=0){
        rem=x%10;
        sum=sum+pow(rem,digits);
        x/=10;

    }
    if(sum==num){
        printf("%d IS ARMSTRONG NUMBER",num);
    }
    else{
        printf("%d IS NOT ARMSTRONG NUMBER",num);
    }
    return 0;

}