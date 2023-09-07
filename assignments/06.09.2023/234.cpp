bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return true;
        }

        ListNode* r_head = NULL;

        ListNode* temp = head;

        while(temp!=NULL)
        {
            ListNode* temp_single = new ListNode(temp->val);

            temp_single->next = r_head;
            r_head = temp_single;
            temp = temp->next;
        }

        // reverseLL(r_head);

        while(head != NULL && r_head != NULL)
        {
            if(r_head->val != head->val)
            {
                return false;
            }

            r_head = r_head -> next;
            head = head -> next;
        }

        return true;

    }