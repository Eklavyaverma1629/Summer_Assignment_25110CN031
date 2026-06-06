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
    if (num==rev){
    printf("%d is palidrome number",num);
    }
    else{
    printf("%d is not palidrome number",num);

    }
    return 0;
}