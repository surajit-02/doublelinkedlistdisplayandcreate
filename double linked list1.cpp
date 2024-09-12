#include<stdio.h>
#include<stdlib.h>

 struct node{
	int data;
	struct node *next;
	struct node *prev;
};

//Function prototype....

struct node*createlist(struct node*);

void display(struct node*);
     



// Main function....

 int main(){
     int k;
     struct node *head=NULL;
     head=createlist(head);
     display(head);
     return 0;
     }
              
       

//Function to creat a double linked list...

           struct node *createlist(struct node *p){
       
               struct node*z,*temp;
               int i,n;
               printf(" Enter the no of nodes=");
               scanf("%d",&n);
      
      
                   printf("\n");
                   for(i=0;i<n;i++){
                           z=(struct node*)malloc(sizeof(struct node));
                           printf(" Enter the %d node data:",i+1);
                           scanf( "%d",&(z->data));
                           if(p==NULL){
                          p=z;
                          z->prev=NULL;
                          z->next=NULL;
                          temp=z;
                   }
                          temp->next=z;
                          z->prev=temp;
                          z->next=NULL;
                          temp=z;
           }
                          return p;
    }
       
//Function to display a double linked list...    
       
       void display(struct node *z)
       {
            struct node *temp = z;
                   while(temp!=NULL)
                   {
                     printf("%d\t",temp->data);
                     temp=temp->next;
                   }
       }
    

