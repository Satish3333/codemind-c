#include <stdio.h>
int main(){
    int a,b,n,m;
    scanf("%d %d",&a,&b);
    n=a*1;
    m=b*2;
    if (b%2==1 and a==0)
    printf("NO");
    else if ((m+n)%2==0)
    printf("YES");
    else
    printf("NO");
}