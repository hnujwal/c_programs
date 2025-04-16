#include<stdio.h>
int main(){
    int x,y;
    printf("enter the two value to add\n");
    scanf("%d%d",&x,&y);
    if (y>0)
    {
        while (y!=0)
        {
            x++;
            y--;
        }
        
    }
    else if (y<0)
    {
        while (y!=0)
        {
            x--;
            y++;
        } 
    }
    printf("the add of two number is %d",x);    

}
