int findKthPositive(vector<int>& arr, int k) {
        int cnt = 0;

        unordered_map<int,bool> chk;

        for(int i = 0; i< arr.size(); i++)
        {
            chk[arr[i]] = true;
        }

        int elem = 0;

        for(int i = 1; arr[arr.size()-1] * k; i++)
        {
            if(cnt == k)
            {
                break;
            }
            if(chk[i] != true)
            {
                elem = i;
                cnt++;
            }
        }

        return elem;
    }