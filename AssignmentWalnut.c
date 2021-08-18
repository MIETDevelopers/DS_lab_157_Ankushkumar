// C program to find the cheapest walnut in Raghunath Bazaar //
/* NAME -> ANKUSH KUMAR
   ROLL NO. -> 2020A1R157
   CREATED -> 18/8/21 */

#include <stdio.h>//Pre Procesiective  directive to include standard input or output header file
#include <stdlib.h>
void create();          
void shop_name();
void prize();
void cheapest_walnut();
struct shop                           
// Creating Aself Referential Structure
{                           
    char shopname[50];
    char items[10];
    int rate;
    struct shop *next;
};
typedef struct shop node;               // Changing the structure
node *head = NULL;
int main()                      // Main function 
{
    int ch;
    create();                                        
    printf("Welcome To Raghunath Bazaar!\n");
    while (1)
    {
        printf("\nPlease Choose From The Following:\n1.To view the shop nearby bazaar\n2.To view prize of the walnut\n3.To view shops with cheapest walnut prizes\n4.Exit\n");
        scanf("%d", &ch);
        switch (ch)//Function for to select any case
        {
        case 1:
            shop_name();                                       
            break;
        case 2:
            prize();
            break;
        case 3:
            cheapest_walnut();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong Choice!");
        }
    }
}
void create() //Create function
{

    node *shop, *temp;
    int n;
    printf("How many shops you want to create\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        shop = (node *)malloc(sizeof(node));                    // Assigned the function
        if (shop == NULL)
        {
            printf("unable to create node");
        }
        else
        {
            fflush(stdin);
            printf("Enter your %d shop name\n", i+1);                   // Adding value to node
            scanf("%[^\n]", shop->shopname);
            fflush(stdin);
            printf("Enter your %d shop item\n",i+1);
            scanf("%[^\n]", shop->items);
            printf("Enter your %d shop item rate\n", i+1);
            scanf("%d", &shop->rate);

            shop->next = NULL;
            if (head == NULL)
            {
                head = temp = shop;
            }
            else
            {
                temp->next = shop;
                temp = shop;
            }
        }
    }
}
void shop_name()      // FUNCTION DEFINITION
{
    node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        for (int i = 0; temp != NULL; i++)
        {
            printf("Shop number %d name is %s\n", i+1, temp->shopname);   // ADDING THE ELEMENTS IN THE NODE //
            temp = temp->next;
        }
    }
}
void prize()                      // FUNCTION DEFINITION 
{
    node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        for (int i = 0; temp != NULL; i++)
        {
            printf("The shop of %s is selling %s at %dRs\n", temp->shopname, temp->items, temp->rate);
            temp = temp->next;
        }
    }
}
void cheapest_walnut()
{
    node *temp;
    node *lowest;
    int low = temp->rate;
    temp = head;
    if (temp == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (temp != NULL)//if temp is equal to Null Print next value
        {

            if (temp->rate < low)
            {
                low = temp->rate;
                lowest = temp;
            }
            temp = temp->next;
        }
        printf("The shop of %s will give lowest prize which is %d on %s\n", lowest->shopname, low,lowest->items);
    }
}