#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode* current = &dummy;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    if (list1 != NULL) {
        current->next = list1;
    } else {
        current->next = list2;
    }

    return dummy.next;
}

int main() {
    struct ListNode node3 = {4, NULL};
    struct ListNode node2 = {2, &node3};
    struct ListNode node1 = {1, &node2};

    struct ListNode node6 = {4, NULL};
    struct ListNode node5 = {3, &node6};
    struct ListNode node4 = {1, &node5};

    struct ListNode* merged = mergeTwoLists(&node1, &node4);

    while (merged != NULL) {
        printf("%d ", merged->val);
        merged = merged->next;
    }

    printf("\n");

    return 0;
}