#include <stdio.h>
int main(){
    int n,a,s=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        s=1;
        scanf("%d",&a);
        for (int j=1;j<=a; j++){
            s=s*j;
        }
        printf("%d
",s);
    }
}