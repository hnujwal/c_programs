#include<stdio.h>
int rectangle(int length,int breadth){
return(length*breadth);
}
int main(){
    int a=10,b=20,area;
    area=rectangle(a,b);
    printf("area of rectangle is=%d",area);
}