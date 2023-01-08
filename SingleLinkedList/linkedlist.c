
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    void *next;
    int data;
} Node;

Node *head = NULL;

// add node to list.
Node *addNode(int data){
    
    Node *new = NULL;
    
    // Case if list is empty.
    if (head == NULL){
        new = malloc(sizeof(Node));
        
        if (new == NULL) return NULL;
        
        new->data = data;
        head = new;
        new->next = NULL;
        
    } else {
        // Case if list is not empty.
        new = malloc(sizeof(Node));
        
        if (new == NULL) return NULL;
        
        new->data = data;
        new->next = head;
        head = new;
    }
    return new;
}


// remove node from list.

// insert node into list.

void printMenu() {
    printf("You have the following options:\n");
    printf("\t1: Add a node to the list.\n");
    printf("\t2: Remove a node from the list.\n");
    printf("\t3: Insert a node to the list at an index.\n");
    printf("\t4: Print the list so far.\n");
    printf("\t5: Quit application.\n");
    return;
}

void printList(){
    Node *current = head;
    while (current != NULL){
        printf("%d->", current->data);
        current = current->next;
    }
    printf("\n");
    return;
}

// insert node into position in list.

int main(int argc, char **argv) {
    int option = -1;
    for (;;) {
        
        if (option == 5) break;
        
        // Display menu to user.
        printMenu();
        
        // Store user input in option variable.
        num_rec = scanf("&d", &option);
        
        if (num_rec == 1 && option > 0 && option <= 4){
            switch(option)
            
            {   
                // Add node option.
                case 1:
                    printf("What data would you like to insert?");
                    scanf("%d", &option);
                    Node *new = addNode(option);
                    break;
                    
                
                // Remove node option.
                case 2:
                    break;
                
                
                // Insert node option.
                case 3:
                    break;
                
                
                // Print linked list.
                case 4:
                    printList();
                    break;
                
                
                // Quit option.
                case 5:
                    break;
                
            }
        }
        
    }

    return 0;
}
