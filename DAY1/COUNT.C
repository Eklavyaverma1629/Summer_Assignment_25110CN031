include<stdio.h>
int main()
{ 
    int n,count=0,i;
    int x=n;
    printf("ENTER  NUMBER ");
    scanf("%d",&n);
    
    if (x<0){
        x=-x;
    }
    while(x!=0){
        count+=1;
        x/=10;
    }
    printf("NUMBER OF DIGITS IN %d is %d = ",n,count);
    return 0;
}