#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
long data;
struct Node *next;
}Node;
void print_ll(Node *head){
    Node * curnNode= head;
while(curnNode!=NULL){
    printf("adrr: %p ,data: %ld ,%ld",head,curnNode->data,curnNode->next);
    curnNode=curnNode->next;
}

}
void push_bask(Node *head,long new_data){
Node *new_node=malloc(sizeof(Node));
if(!new_node){
    perror("could not malloc");
    exit(-1);
}
new_node->data=new_data;
new_node->next=NULL;
Node *last_node=head;
//
while(last_node->next!=NULL){
   last_node=last_node->next;
}
last_node->next=new_node;

}
Node *head1;
void pop_front(Node **head_pp){
Node *deleted1=*head_pp;
*head_pp->(*head_pp->next);
free(deleted1);

}
int main(){
    /*printf("%lu %lu",sizeof(long),sizeof(long));
    printf()*/
Node* a =malloc(sizeof(Node)),
*b=malloc(sizeof(Node)),
*c=malloc(sizeof(Node)),
*d=malloc(sizeof(Node));
a->data =5;
a->next=b;
b->data =8;
b->next=c;
c->data =3;
c->next=d;
d->data =12;
d->next=NULL;

Node *e = malloc(sizeof(Node));
e->data=1;
e->next = NULL;
d->next=e;
head1=a;
print_ll(head1);
push_bask(head1,100);
push_bask(head1,101);
push_bask(head1,102);
free(a);
free(b);
free(c);
free(d);

    return 0;
}