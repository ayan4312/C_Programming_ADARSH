#include<stdio.h>
int main ()
{
    int i, j, temp, k;
    printf("Enter the value to find the number:");
    scanf("%d",&k);
    int a[10]={101,44,34,8,10,23,1,10,9,7};
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d Largest elements:%d\n",k,a[k-1]);
    printf("%d Smallest number is :%d\n ",k,sizeof(a)/sizeof(a[0]-k-1));
    printf("Printing the sorted element list....\n");
    for(i=0;i<10;i++){
    printf("%d\n",a[i]);
    
}
return 0;
}