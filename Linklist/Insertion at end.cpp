#include <iostream>
using namespace std;

// A linked list node
class Node {
public:
    int data;
    Node* next;
};

void append(Node** head_ref, int new_data)
{

    Node* new_node = new Node();
    new_node->data = new_data;


    Node* last = *head_ref;


    new_node->next = NULL;


    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

   while (last->next != NULL) {
       last = last->next;
   }


    last->next = new_node;
}

// This function prints the contents of
// the linked list starting from the head
void printList(Node* node)
{
    while (node != NULL) {
        cout << " " << node->data;
        node = node->next;
    }
}

// Driver code
int main()
{

    Node* head = NULL;

    append(&head, 6);
    append(&head, 5);
    append(&head, 4);
    append(&head, 3);
    append(&head, 2);

    cout << "Created Linked list is: ";
    printList(head);


    append(&head, 1);

    cout << "\nAfter inserting 1 at the end: ";
    printList(head);

    return 0;
}