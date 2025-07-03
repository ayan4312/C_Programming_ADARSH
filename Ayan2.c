#include <stdio.h>
int main(){
    int a=5, b=4,c=3;
    int sum,sub,multi;
    float divi;
    sum=a+b+c;
    sub=a-b-c;
    multi=a*b*c;
    divi=a/b/c;
    printf("a+b+c=%d\na-b-c=%d\na*b*c=%d\na/b/c=%f\n", sum, sub,multi, divi);
    return 0;
}