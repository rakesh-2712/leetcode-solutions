#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int main() {
    struct ListNode node3 = {3, NULL};
    struct ListNode node2 = {2, &node3};
    struct ListNode node1 = {1, &node2};

    struct ListNode* reversed = reverseList(&node1);

    while (reversed != NULL) {
        printf("%d ", reversed->val);
        reversed = reversed->next;
    }

    printf("\n");

    return 0;
}