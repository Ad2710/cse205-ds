int getLength(ListNode* head)
    {
        ListNode* temp = head;

        int cnt = 0;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp -> next;
        }

        return cnt;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head -> next == NULL)
        {
            return head -> next;
        }

        int len = getLength(head);

        int pos = len-n+1;

        ListNode* prev = NULL;
        ListNode* curr = head;

        //if it is at head

        if(pos == 1)
        {
            ListNode* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head;
        }

        int cnt = 1;


        //middle node
        while(cnt!=pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        
        prev->next = curr->next;

        curr->next = NULL;

        delete curr;

        return head;
    }