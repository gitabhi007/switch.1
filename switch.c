#include <stdio.h>
main()
{
 //      1.Display the menu
 printf("pick an item:\n1. Burger\n2. French Fried\n3. Sandwich\4. pasta\n5. pizza");
 //2.Read their choice
 int choice=0;
 scanf("%d",&choice);
 //3.Display based on their choice
 
 switch(choice)
 {
   case 1:
     printf("you picked Burger,Rs129.");
     break;
   case 2:
     printf("you picked French Fried,Rs99.");
     break;
   case 3:
     printf("you picked sandwich,Rs149.");
     break;
   case 4:
     printf("you picked pasta,Rs179.");
     break;
   case 5:
     printf("you picked pizza,Rs239.");
   default : printf("Invalid choice.");
 }
}