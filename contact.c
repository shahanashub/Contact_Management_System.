#include<stdio.h>
#include<string.h>

#define MAX_CONTACTS 100

struct contact
{
    char name[50];
    char phone[15];
    char email[50];
};

void displayContact(struct contact c)
{
    printf("Name:%s\n",c.name);
    printf("Phone:%s\n",c.phone);
    printf("Email:%s\n",c.email);
}

int main()
{
    struct contact c[MAX_CONTACTS];
    int count=0;
    int choice;

    int j;
    while(1)
    {
       
   
    printf("\nContact Management System\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("1.Add New Contact\n");
    printf("2.View All The Contacts\n");
    printf("3.Exit The Program\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);
   
        switch(choice)
        {
            case 1:{
           
            if(count<MAX_CONTACTS)
            {
                struct contact newcontact;
                printf("\nEnter Name:");
                scanf("%s",newcontact.name);
                printf("Enter Phone Number:");
                scanf("%s",newcontact.phone);
                printf("Enter Email:");
                scanf("%s",newcontact.email);
               
                c[count]=newcontact;
                count++;
                printf("\n***Contact added successfully.***\n\n");
            }
            else
            {
            printf("Contact limit reached.cannot add more.\n");    
            }
           break;
        } 
   

case 2:
{
if(count==0)
{
    printf("Not Available");
}
else
{
    printf("\nContacts List:\n");
   
    for(int j=0;j<count;j++)
    {
     printf("°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("Contact%d:\n",j+1);
    displayContact(c[j]);
}
}
break;
}
case 3:

printf("👋Exit the System👋\n");
return 0;

default:
printf("Invalid.Please try Again");

}
}
return 0;

}

	

