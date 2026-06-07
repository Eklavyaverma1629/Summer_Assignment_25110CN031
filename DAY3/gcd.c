#include<stdio.h>
#include<math.h>
int main(){
    int num1,num2,temp,x,y,b;
    printf("ENTER TWO NUMBER");
    scanf("%d %d",&num1,num2);
    x=num1;
    y=num2;
    while(y!=0){
        temp=y;
        b=x%y;
        x=temp
    }
    printf("THE GCD OF %d and %d IS %d :,num1,num2,x");
    return 0;
}