#include<stdio.h>
int main(){
    int year;
    printf("enter the year/n");
    scanf("%d",&year);
    if(year%400==0||year%4==0){
        printf("%d year is a leap year",year); 
    }
    else if (year%100==0)
    {
        printf("%d year is not a leap year");
    }
    else
    {
        printf("%d year is not a leap year");
    }
    
    return 0;
}