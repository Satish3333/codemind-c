#include <stdio.h>
#include <math.h>
int main(){
    int n,a,s;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        s=pow(a,0.5);
        if (a%s==0)
        printf("True
");
        else
        printf("False
");
        
    }
}