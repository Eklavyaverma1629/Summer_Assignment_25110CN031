#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("ENTER NUMBER");
    Scanf("%D",&num);
    if(num<=0){
        printf("%d IS NOT PERFECT NUMBER",num);
    }
    else{
        for (i=1;i<=num/2;i++){
            if(num%i==0){
            sum+=i;
           }
        }
        if(sum==num){
        printf("%d IS PERFECT NUMBER",num);
        }
        else{
          printf("%d IS NOT PERFECT NUMBER",num);

        }
    }
    
    return 0;
}