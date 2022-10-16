#include <stdio.h>
#include <math.h>
int main(){
    int a,b,r,s=0;
    scanf("%d",&a);
    b=pow(a,2);
    while (b>0){
        r=b%10;
        b=b/10;
        s=s+r;
    }
    if (s==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    
}