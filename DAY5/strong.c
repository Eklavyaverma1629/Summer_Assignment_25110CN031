#include<stdio.h>
int factorial(int n){
    int fact=1,i;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int num,x,rem,sum=0;
    printf("ENTER NUMBERA");
    scanf("%d",&num);
    x=num;
    while(x>0){
        rem=x%10;
        sum=sum+factorial(rem);
        x/=10;
    }
    if(sum==num){
        printf("%d IS STRONG NUMBER",num);
    }
    else{
        printf("%d IS NOT STRONG NUMBER",num);

    }

}