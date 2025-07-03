#include <stdio.h>
int main (){
    int a,c;
    printf("Enter the values of a and c:");
    scanf("%d %d",&a,&c);
    c+=a;
    printf("c=%d\n",c);
    c-=a;
    printf("c=%d\n",c);
    c%=a;
    printf("c=%d\n",c);
    return 0;
}