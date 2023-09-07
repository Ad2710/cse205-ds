void insertAtTail(ListNode* &head, ListNode* &tail, int val)
    {
        ListNode* temp = new ListNode(val);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = tail -> next;
            return;
        }
    }

    // ListNode* reverseList(ListNode* l)
    // {
    //     ListNode* prev = NULL;
    //     ListNode* curr = l;
    //     ListNode* forward = NULL;

    //     while(curr != NULL)
    //     {
    //         forward = curr -> next;
    //         curr -> next = prev;
    //         prev = curr;
    //         curr = forward;
    //     }

    //     return prev;

    // }

    ListNode* add(ListNode* first, ListNode* second)
    {
        int carry = 0;

        ListNode* head = NULL;
        ListNode* tail = NULL;
        while(first != NULL && second != NULL)
        {
            int sum = carry + first -> val + second -> val;
            int digit = sum % 10;

            insertAtTail(head,tail,digit);

            carry = sum/10;
            first = first -> next;
            second = second -> next;

        }

        while(first != NULL)
        {
            int sum = carry + first -> val;
            int digit = sum % 10;

            insertAtTail(head,tail,digit);

            carry = sum/10;
            first = first -> next;
        }

        while(second != NULL)
        {
            int sum = carry + second -> val;
            int digit = sum % 10;

            insertAtTail(head,tail,digit);

            carry = sum/10;
            second = second -> next;
        }

        while(carry != 0)
        {
            int sum = carry;
            int digit = sum;

            insertAtTail(head,tail,digit);
            carry = 0;
        }

        return head;

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // l1 = reverseList(l1);
        // l2 = reverseList(l2);

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        return add(l1,l2);

    }