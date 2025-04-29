#include<stdio.h>
struct point
{
    int x;
    int y
};
struct rectangle
{
    struct point upper_left;
    struct point lower_right;
    
};
int area(struct rectangle r){
    int length,breadth;
    length=r.lower_right.x-r.upper_left.x;
    breadth=r.lower_right.y-r.upper_left.y;
    return length*breadth;
}
int main(){
    struct rectangle r;
    printf("enter the upper left coordinates of the rectangle :\n");
    scanf("%d%d",&r.upper_left.x,&r.upper_left.y);
printf("enter the lower left coordinates of the rectangle :\n");
scanf("%d%d",&r.lower_right.x,&r.lower_right.y);
printf("area of the rectangle:%d",area(r));
return 0;
}
