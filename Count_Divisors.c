#include <stdio.h>
int main(){
    int a,b,c,s=0;
    scanf("%d%d%d",&a,&b,&c);
    for (int i=a;i<=b;i++){
        if (i%c==0)
        s+=1;
    }
    printf("%d",s);
}