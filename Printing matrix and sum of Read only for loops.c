#include<stdio.h>
int main()
{
int a[3][3],i,j,sum=0;
printf("Enter Matrix Elements \n");
for(i=0;i<3;i++)
{ 
    for(j=0;j<3;j++)
  {
   printf("Enter element [%d][%d]",i,j);
   scanf("%d",&a[i][j]);
  }
}
   printf("Matrix is:-\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    { 
    printf("%3d",a[i][j]);
    }
    printf("\n");
  }
for(i=0;i<=3;i++) 
{
 sum=sum+a[i][i];
 
}
printf(" Sum of diagonal elements is %d", sum);
    return 0;
 }


