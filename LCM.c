#include <stdio.h>
int main(){
    int a,b,c=2,d;
    scanf("%d %d",&a,&b);
    if (a<b)
    a,b=b,a;
    d=b;
    while (d%a!=0){
        d=b*c;
        c+=1;
    }
    printf("%d",d);
}