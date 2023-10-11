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

    int arrayPairSum(vector<int>& nums) {
        
        int n = nums.size()-1;
        mergesort(nums, 0, n);

        vector<int> pair_sum;

        int max_sum = 0;

        for(int i = 0; i <= n; i += 2)
        {
            int sum = min(nums[i],nums[i+1]);
            max_sum += sum;
        }

        return max_sum;

    }