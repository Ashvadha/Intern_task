#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void addNode(struct Node** headRef, int newData);
void deleteNode(struct Node** headRef, int key);
void deleteData(struct Node** headRef, int data);
void deleteList(struct Node** headRef);
void displayList(struct Node* node);
void displayInvertedList(struct Node* node);
void displayMemory(struct Node* node);

int main() {
    struct Node* head = NULL;
    int choice, data, key;

    do {
        printf("\nChoose an option:\n");
        printf("1. Add a new node\n");
        printf("2. Delete a particular node\n");
        printf("3. Delete all nodes containing a particular data\n");
        printf("4. Delete the complete linked list\n");
        printf("5. Display the linked list\n");
        printf("6. Display the inverted linked list\n");
        printf("7. Display the total memory space occupied by the linked list\n");
        printf("8. Delete all nodes containing a particular data and the next subsequent node\n");
        printf("9. Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to add: ");
                scanf("%d", &data);
                addNode(&head, data);
                printf("Node added successfully!\n");
                break;
            case 2:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteNode(&head, key);
                break;
            case 3:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                deleteData(&head, data);
                break;
            case 4:
                deleteList(&head);
                printf("Linked list deleted successfully!\n");
                break;
            case 5:
                printf("Linked list: ");
                displayList(head);
                break;
            case 6:
                printf("Inverted linked list: ");
                displayInvertedList(head);
                printf("\n");
                break;
            case 7:
                displayMemory(head);
                break;
            case 8:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteDataAndNext(&head, key);
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 9);

    return 0;
}

void addNode(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

void deleteNode(struct Node **head_ref, int position) {
    if (*head_ref == NULL) {
        printf("Linked list is empty\n");
        return;
    }

    struct Node* temp = *head_ref;
    if (position == 0) {
        *head_ref = temp->next;
        free(temp);
        printf("Node at position %d deleted successfully\n", position);
        return;
    }

    int count = 0;
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Node at position %d does not exist\n", position);
        return;
    }

    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
    printf("Node at position %d deleted successfully\n", position);
}
// Function to delete all nodes containing a particular data
void deleteData(struct Node **head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;
    int deleted = 0;

    while (temp != NULL) {
        if (temp->data == key) {
            if (prev == NULL) {
                *head_ref = temp->next;
            } else {
                prev->next = temp->next;
            }
            struct Node* to_free = temp;
            temp = temp->next;
            free(to_free);
            deleted = 1;
            printf("Data deleted successfully!\n");
        } else {
            prev = temp;
            temp = temp->next;
        }
    }

    if (!deleted) {
        printf("Data not found in the linked list\n");
    } else if (*head_ref == NULL) {
        printf("Linked list is empty\n");
    }
}


// Function to delete the complete linked list
void deleteList(struct Node** headRef) {
    struct Node* current = *headRef;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *headRef = NULL;
}

// Function to display the linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to display the inverted linked list
void displayInvertedList(struct Node* node) {
    if (node == NULL) {
        return;
    }

    displayInvertedList(node->next);
    printf("%d ", node->data);
}

// Function to display the total memory space occupied by the linked list
void displayMemory(struct Node* node) {
    int size = 0;

    while (node != NULL) {
        size += sizeof(struct Node);
        node = node->next;
    }

    printf("Total memory space occupied by the linked list: %d bytes\n", size);
}
void deleteDataAndNext(struct Node **head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;
    int deleted = 0;

    while (temp != NULL) {
        if (temp->data == key) {
            if (prev == NULL) {
                *head_ref = temp->next->next;
            } else {
                prev->next = temp->next->next;
            }
            struct Node* to_free = temp->next;
            free(temp);
            free(to_free);
            temp = prev == NULL ? *head_ref : prev->next;
            deleted = 1;
            printf("Data and next node deleted successfully!\n");
        } else {
            prev = temp;
            temp = temp->next;
        }
    }

    if (!deleted) {
        printf("Data not found in the linked list\n");
    } else if (*head_ref == NULL) {
        printf("Linked list is empty\n");
    }
}
