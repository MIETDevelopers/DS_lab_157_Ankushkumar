//Name :Ankush kumar
//Roll No:2020A1R157
//Program to insert , delete and search in array 
#include <stdio.h>//Preprocessor directive to include standard output and input header file
#include <stdlib.h>//Preprocessor directive to include standard library header file
int main()//Execution start from main function
{
    int a[100];
    int element,i,loc,size,n,j,choice;
    //printf("C Program to Insert and Delete an Element in an Array using switch case\n");
    printf("1. Inserting an Element in an Array\n");
    printf("2. Deleting an Element in an Array\n");
    printf("3 for search element in an \n");
    printf("Select your choice : ");
    scanf("%d",&choice);
    switch(choice)//start switch case
    {
    case 1:
       printf("Enter the size of an array\n");
        scanf("%d",&size);//size is taken by user
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)//start loop from 0 and size is taken by user
        {
            scanf("%d",&a[i]);
        }
        printf("List before Insertion: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to insert\n");
        scanf("%d",&element);
        printf("Enter a position to insert an element %d\n",element);
        scanf("%d",&loc);//loc is taken by user
        loc--;
        for(i=size-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=element;
        printf("List after Insertion: ");
        for(i=0;i<size+1;i++)
        {
            printf("%d ",a[i]);
        }
         break;
    
    case 2://Delete function start
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before deletion\n");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to delete\n");
        scanf("%d",&n);
        for(i=0;i<size;i++)
        {
            if(a[i]==n)
            {
                for(j=i;j<(size-1);j++)//value is going to a[j]
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("List after deletion\n");
        for(i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;
    case 3://search function start 
        printf("enter the number for search element");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);//i is taken by user
        }
        printf("enter the number for search\n");
         printf("nEnter element to search:\n");
    scanf("%d",&size);
     
    for(i=1;i<n;++i)
        if(a[i]==size)
            break;
     
    if(i<n)
        printf("Element found at index %d\n",i);
    else
        printf("Element not found\n");
            break;
    default:
        printf("enter wrong key");
    }
    return 0;//return statement
}