#include <stdio.h>
int main(){
    int a,b,w,h;
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i=0; i<b;i++){
        scanf("%d%d",&w,&h);
        if (w<a or h<a)
        printf("UPLOAD ANOTHER
");
        else if (w==h)
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
    }
}