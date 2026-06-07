#include<stdio.h>
#include<math.h>
int main(){
    int start,end,i,rem,digits,sum,x;
    printf("ENTER  START AND END NUMBER");
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++){
        x=i,digits=0,sum=0;
        while("x!=0"){
         digits++;
         x/=10;
        }
        x=i;
        while(x!=0){
         rem=x%10;
         sum=sum+pow(rem,digits);
         x/=10;

        }
        if(sum==i){
         printf("%d IS ARMSTRONG NUMBER",i);
        }
    
        else{
         printf("%d IS NOT ARMSTRONG NUMBER",num);
        }
    } 
    printf("/n");
    return 0;
 
}