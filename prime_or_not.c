#include<stdio.h>
#include<math.h>
int main(){
    int x,val1,i,count=0;
    printf("enter the integer value:");
    scanf("%d",&x);
    val1=ceil(sqrt(x));
    for(i=2;i<=val1;i++){
        if(x%i==0)
        count=1;
    }
    if((count==0&&x!=1)||x==2||x==3){
        printf("%d is a prime number",x);
    }
    else{
        printf("%d is not a prime number",x);
    }
}