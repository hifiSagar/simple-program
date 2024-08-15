#include<stdio.h>
int main(){
    int a=2,b=1;
    int choice;
    printf("enter  1 to add two numbers\n");
    printf("enter  2 to subtract two numbers\n");
    printf("enter  3 to multiply two numbers\n");
    printf("enter  4 to divide two numbers\n");
    printf("=======================================\n");
    scanf("%d ",&choice);
    switch (choice)
    {
    case 1:
    printf("addition of two numbers is= %d\n",a+b);
        break;
     case 2:
         printf(" subtraction of two numbers is= %d\n",a-b);
         break;
    case 3:
          printf(" multiplication of two numbers is= %d\n",a*b);
          break;
    case 4:
           printf(" divison of two numbers is= %d\n",a/b);
           
        break;
    
    default: 
    printf("Invalid choice\n");
        break;
    }
    return 0;
}