#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    head->data=5;
    head->link=NULL;

    struct node *current = NULL;
    current=malloc(sizeof(struct node));
    current->data=10;
    ///current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=15;
    ///current->link=NULL;
    head->link->link=current;

    printf("    1-st node add %p \n", head->link);

    printf("    2-nd node add %p \n", head->link->link);

    return 0;

}