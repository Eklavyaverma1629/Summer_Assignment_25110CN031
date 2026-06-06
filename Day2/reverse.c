#include<stdio.h>
int main(){
    int num,rem,rev=0;
    printf("ENTER NUMBER");
    scanf("%d",&num);
    int x=num;

    while(x!=0){
        rem= x%10;
        rev=rev*10+rem;
        x/=10;
    }
    printf("reverse of number %d is %d ",num,rev);
    return 0;
}