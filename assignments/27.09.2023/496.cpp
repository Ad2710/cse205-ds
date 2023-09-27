vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

    stack<int> st;
    unordered_map<int,int> mpp;

    for(int i : nums2)
    {
        while(!st.empty() && st.top() < i)
        {
            mpp[st.top()] = i;
            st.pop();
        }

        st.push(i);
    }

    for(int i = 0; i < nums1.size(); i++)
    {
        if(mpp.count(nums1[i]))
        {
            nums1[i] = mpp[nums1[i]];
        }
        else
        {
            nums1[i] = -1;
        }
    }

    return nums1; 

    }