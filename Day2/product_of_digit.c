#include<stdio.h>
int main(){
    int num,rem,product=1;
    printf("ENTER NUMBER");
    scanf("%d",&num);
    int x=num;
    if (x==0){
        product=0;
    }
    else if (x<0){
        x=-x;
    }


    while(x>0){
        rem= x%10;
        product=product*rem;
        x/=10;
    }
    printf("product of number %d is %d ",num,product);
    return 0;
}