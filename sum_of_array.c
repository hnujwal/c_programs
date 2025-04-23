#include<stdio.h>
int main(){
    int arr[5]={10,20,5,6,7};
    int *p,i;
    int sum=0;
    for(p=arr;p<=arr+4;p++){
        sum+=*p;
    }
    printf("sum is:%d",sum);
}