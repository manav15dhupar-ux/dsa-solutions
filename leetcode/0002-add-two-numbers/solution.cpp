#include <iostream>

// Do not include 'struct ListNode' here; the platform provides it automatically.

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Create a dummy node to simplify list construction
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;

        // Loop while there are nodes remaining in l1 OR l2, or a remaining carry
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Calculate new carry and the digit to store
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        // The actual head of the result list is the node after dummy
        ListNode* result = dummyHead->next;
        delete dummyHead; // Free dummy head memory to avoid leaks

        return result;
    }
};
