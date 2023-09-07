void deleteNode(ListNode* node) {
        // ListNode * temp = node;
        node->val = node->next->val;
        node->next = node->next->next;

        // delete node;
    }