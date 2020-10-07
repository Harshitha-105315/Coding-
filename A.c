#include <stdio.h>
#include<stdlib.h>
int main() {
    int choice,price=0,item;
    int numberofplates[]={10,30,50};
    do
    {
        printf("\n------menu------\n");
            printf("1.manchuria \n2.noodles\n3.idly4.default"  );
    printf("select choice");
    scanf("%d",&choice);


    switch(choice)
    {
        
        case 1:
                if(numberofplates[0]!=0){
        	
         price+=50;
         printf("%d",price);
         
         numberofplates[0]--;
         }
         else
         printf("item not availabale");

                  break;
        case 2:
        if(numberofplates[1]!=0)
        {
          price+=60;
          printf("%d",price);
          numberofplates[1]--;
          	}
          	else
          	printf("item not availabale");

          break;
         case 3:
         if(numberofplates[2]!=0)
         {
          price+=40;
          printf("%d",price);
          numberofplates[2]--;
          }
          else
          printf("item not availabale");

          break;
         default:
          printf("invalid choice");
         
    }
    }while(choice!=4);
    printf("total bill");
    printf("%d",price);
    
          
    return 0;
}
                
