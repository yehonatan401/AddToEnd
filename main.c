#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct node {
    char data[20];
    struct node *next;
}Node;

void AddToEnd(Node *curent ,const char *newname) {
    while (curent->next != nullptr) {
        curent = curent->next;
    }
    Node* newnode = (Node*)malloc(sizeof(Node));
    if (newname == nullptr) return free(newnode);
    strcpy(newnode->data, newname);
    printf("%s\n", newnode->data);
    newnode->next = nullptr;
    curent->next = newnode;
}

int main() {
    Node *head = (Node*)malloc(sizeof(Node));
    AddToEnd(head, "Hello World");
    AddToEnd(head, "Hello World");
    AddToEnd(head, "will");


    while (head != nullptr) {
        Node *safexit = head->next;
        free(head);
        head = safexit;
    }

}
