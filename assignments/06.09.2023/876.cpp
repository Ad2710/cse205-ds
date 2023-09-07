ListNode* middleNode(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        //if two nodes are there
        if(head -> next -> next == NULL)
        {
            return head -> next;
        }

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!= NULL && fast -> next != NULL)
        {
            fast = fast->next->next;
            slow = slow -> next;            
        }

        return slow;

    }