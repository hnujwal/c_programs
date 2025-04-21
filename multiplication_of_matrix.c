#include<stdio.h>
int main(){
    int a[3][3],b[3][3],sum[3][3];
    int i,j,k;
    int s=0;
     printf("enter the element of the matrix a:\n ");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the element of the matrix b:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("\n");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++){

            s+= a[i][k]*b[k][j];
        }
        sum[i][j]=s;
        s=0;

        }
    }
    printf("resultant matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}