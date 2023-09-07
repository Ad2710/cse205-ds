 int len(ListNode* head)
        {
            int cnt = 0;

            while(head!=NULL)
            {
                cnt++;
                head = head -> next;
            }

            return cnt;
        }

        ListNode* solve(ListNode* head, int k, int &count)
        {
            if(head == NULL || head -> next == NULL)
            { 
                return head;
            }

            ListNode* prev = NULL;
            ListNode* next = NULL;
            ListNode* curr = head;

            if(count < k)
            {
                return head;
            }

            for(int i = 0; i < k; i++)
            {
                if(curr != NULL)
                {
                    next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                    count--;
                }
                
            }

            if(head != NULL)
            {
                head -> next = solve(curr,k,count);
            }
            
            return prev;
        }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int length = len(head);

        return solve(head,k,length);
    }