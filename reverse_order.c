#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int i;
    for(i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for( i=5;i>=0;i--){
    printf("%d ",arr[i]);
    }
    return 0;
}