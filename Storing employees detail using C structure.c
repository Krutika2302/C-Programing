#include <stdio.h>
struct employee
{
    char name[20];
    int age,phone,salary;
} ep[20];

int main() {
int i,n;
printf("Enter number of employees\n\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("employee %d enter your details name,age,phone number and salary\n\n",i+1);
 scanf("%s%d%d%d",ep[i].name,&ep[i].age,&ep[i].phone,&ep[i].salary);
}
printf("Name\t\tAge\t\tPhone number\t\t Salary\n");

for(i=0;i<n;i++)
{  
 printf("%s\t\t%d\t\t\t%d\t\t  %d\n",ep[i].name,ep[i].age,ep[i].phone,ep[i].salary);
}
    return 0;
}


