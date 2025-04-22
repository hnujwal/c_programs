#include<stdio.h>
void maxmin(int arr[],int len,int *min,int *max){
    *min=*max=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>*max)
            *max=arr[i];
        if (arr[i]<*min)
            *min=arr[i];
        
    }
}
int main(){
int a[]={12,6,5,4,20,11,14,23,55,70,90};
int len,max,min;
len=sizeof(a)/sizeof(a[0]);
maxmin(a,len,&min,&max);
printf("minimum value in the array is:%d and maximum value in the array is:%d ",min,max);
}