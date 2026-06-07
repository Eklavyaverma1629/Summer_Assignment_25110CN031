#include <stdio.h>
int Findfabonaci(int n){
    if (n<=0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Findfibonaci(n-1)+Findfibonaci(n-2);
}
int main(){
    int n,result;

    printf("ENTER TERM");
    scanf("%d",&n);
    result=Findfabonic(n);
    printf("%d FABONIC NUMBER IS %d:",n,result);
    return 0;

}