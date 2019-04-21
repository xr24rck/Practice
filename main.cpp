//
//  main.cpp
//  Hello World
//
//  Created by Saumya Ranjan on 17/04/19.
//  Copyright © 2019 Saumya Ranjan. All rights reserved.
//

#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void display() {
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        cout<< ptr->data <<" ";
        ptr = ptr->next;
    }
}

void deleteNode(){
    struct Node* temp = head;
    head=temp->next;
    cout<<"\nData to be deleted:"<<temp->data;
    temp->next=NULL;
}
int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout<<"The linked list is: ";
    display();
    deleteNode();
    cout<<"\n";
    display();
    return 0;
}

