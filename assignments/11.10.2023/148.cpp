void merge(vector<int> &nums, int s, int e)
    {
        int mid = s - (s-e)/2;
        int size1 = mid - s + 1;
        int size2 = e - mid;

        int* first = new int[size1];
        int* second = new int[size2];

        int k = s;

        for(int i = 0; i < size1; i++)
        {
            first[i] = nums[k++];
        }

        k = mid+1;
        for(int i = 0; i < size2; i++)
        {
            second[i] = nums[k++];
        }

        int index1 = 0;
        int index2 = 0;
        int minIndex = s;

        while(index1 < size1 && index2 < size2)
        {
            if(first[index1] < second[index2])
            {
                nums[minIndex++] = first[index1++];
            }
            else
            {
                nums[minIndex++] = second[index2++];
            }
        }

        while(index1 < size1)
        {
            nums[minIndex++] = first[index1++];
        }

        while(index2 < size2)
        {
            nums[minIndex++] = second[index2++];
        }

    }

    void mergesort(vector<int> &nums, int start, int end)
    {
        if(start >= end)
        {
            return;
        }

        //left part
        int mid = start - (start-end)/2;
        mergesort(nums, start, mid);
        //right part
        mergesort(nums,mid+1,end);

        merge(nums, start, end);
    }

    ListNode* sortList(ListNode* head) {
        vector<int> v;

        ListNode* temp = head;

        while(temp)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }

        int n = v.size();

        mergesort(v,0,n-1);

        temp = head;

        for(int i = 0; i < n && temp; i++)
        {
            if(temp)
            {
                temp -> val = v[i];
                temp = temp->next;
            }
        }

        return head;      
    }