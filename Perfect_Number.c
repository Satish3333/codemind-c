#include <stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    for (int i=1;i<a;i++){
        if (a%i==0)
        c=c+i;
    }
    if (c==a)
    printf("True");
    else
    printf("False");
    
}