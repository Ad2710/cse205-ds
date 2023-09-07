int getLen(ListNode* head)
    {
        int len = 0;

        while(head != NULL)
        {
            len++;
            head = head -> next;
        }

        return len;
    }
public:

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA == NULL || headB == NULL)
        {
            return NULL;
        }

        int lenA = getLen(headA), lenB = getLen(headB);

        if(lenA > lenB)
        {
            while(lenA > lenB)
            {
                headA = headA -> next;
                lenA--;
            }
        }
        else
        {
            while(lenB > lenA)
            {
                headB = headB -> next;
                lenB--;
            }
        }

        while(headA!=NULL && headB!=NULL)
        {
            if(headA == headB) return headA;

            headA = headA -> next;
            headB = headB -> next;
        }

        return NULL;

    }