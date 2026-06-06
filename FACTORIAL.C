include<stdio.h>
int main()
{ 
    int n,fact=1,i;
    printf("ENTER  NUMBER ");
    scanf("%d",&n);
    if (n<0){
        printf("FACTORIAL OF NEGATIVE NUMBER NOT POSSIBLE");
    }
    else {
        for ( i = 1; i <=n; i++)
        {
            fact*=i;
        }
        printf("FACTORIAL OF %d = is %d",n,fact);
    }
    return 0;
}