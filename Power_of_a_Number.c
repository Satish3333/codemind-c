#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&c);
    m=pow(a,b);
    printf("%d",m%c);
    
}