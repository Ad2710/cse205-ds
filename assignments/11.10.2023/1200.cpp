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

    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        int n = arr.size();

        mergesort(arr,0,n-1);

        int diff = INT_MAX;

        vector<vector<int>> ans;

        int temp = 0;

        for(int i = 1; i < n; i++)
        {
            temp = arr[i] - arr[i-1];

            if(temp < diff)
            {
                ans.clear();
                ans.push_back({arr[i-1], arr[i]});
                diff = temp;
            }
            else if(temp == diff)
            {
                ans.push_back({arr[i-1], arr[i]});
            }
        }   

        return ans;

    }