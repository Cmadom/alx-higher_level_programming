#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

int is_palindrome(listint_t **head) {
    listint_t *slow = *head, *fast = *head, *prev = NULL, *temp;
    
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        temp = slow;
        slow = slow->next;
        temp->next = prev;
        prev = temp;
    }
    
    if (fast != NULL) {
        slow = slow->next;
    }
    
    while (prev != NULL && slow != NULL) {
        if (prev->n != slow->n) {
            return 0;
        }
        prev = prev->next;
        slow = slow->next;
    }
    
    return 1;
}

void print_list(listint_t *head) {
    while (head != NULL) {
        printf("%d -> ", head->n);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    listint_t *head = NULL;
    
    // Creating a sample linked list for testing
    for (int i = 1; i <= 5; i++) {
        listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
        new_node->n = i;
        new_node->next = head;
        head = new_node;
    }
    
    printf("Original linked list:\n");
    print_list(head);
    
    int result = is_palindrome(&head);
    
    printf("Is the linked list a palindrome? %s\n", result ? "Yes" : "No");
    
    // Freeing the memory
    listint_t *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    
    return 0;
}
