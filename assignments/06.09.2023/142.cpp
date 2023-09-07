ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL || head -> next -> next == NULL)
        {
            return NULL;
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
                break;
            }
        }

        if(slow == NULL || fast == NULL)
        {
            return NULL;
        }

        if(slow == head && fast == head)
        {
            return fast;
        }

        slow = head;

        while(slow != fast && slow != NULL && fast!=NULL)
        {
            slow = slow -> next;
            fast = fast -> next;
        }

        return fast;
    }