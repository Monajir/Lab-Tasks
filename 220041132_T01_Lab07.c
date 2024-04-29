// Implementation of Doubly Linked List

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int value;
    struct node *next;
    struct node *prev;
}node;

node *list = NULL;

void prepend(int element){
    node *n = (node *)malloc(sizeof(node));

    n->value = element;
    n->prev = NULL;

    list->prev = n;
    n->next = list;
    list = n;

}

void append(int element){
    node *n = (node *)malloc(sizeof(node));
    n -> value = element;
    n -> next = NULL;
    n -> prev = NULL;

    node *temp = list;

    while (temp -> next != NULL)
    {
         temp = temp -> next;
    }  
    n -> prev = temp;
    temp -> next = n;   
}

void insert_sorted(int element){
    
}

int main(){


}