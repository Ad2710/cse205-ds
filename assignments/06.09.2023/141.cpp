bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL)
        {
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        
        while(slow != NULL && fast != NULL)
        {

            slow = slow -> next;
            fast = fast -> next;
            
            if(fast != NULL)
            {
                fast = fast -> next;
            }
            if(slow == fast)
            {
                return true;
            }
        }

        return false;
    }