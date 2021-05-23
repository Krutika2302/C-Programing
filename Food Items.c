#include<stdio.h>
int main()
{
printf("Food item:\n1.Pizza\n2. Burger\n3.pasta\n4. french fries\n5. sandwich");
int choice;
scanf("%d",&choice);
switch (choice)
{
case 1:
 printf("Food item- pizza\n Price-239 ");

break;
case 2:
 printf(" Food item-Burger\n price-129 ");
break;
case 3: 
printf("Food item-Pasta\n price-179 ");
break;
case 4: 
printf("Food item- French fries\n price-99 ");
break;
case 5:
printf("Food item- sandwich\n price-149");
break;
default: printf("You didn't choose any food item");
}
return 0;
}
