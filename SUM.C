include<stdio.h>
int main()
{ 
    int n,sum=0,i;
    printf("ENTER NATURAL NUMBER ");
    scanf("%d",&n);
    if (n<0){
        printf("ENTER VALID NUMBER");
    }
    else {
        for ( i = 1; i <=n; i++)
        {
            sum=+i;
        }
        printf("SUM OF %d NUMBER IS %d",n,sum);

    }
    return 0;
}
    